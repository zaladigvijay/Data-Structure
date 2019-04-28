#include<stdio.h>
#include<stdlib.h>
#define N 10
int q[N];
int f=-1,r=-1;
void enqueue(int data)
{
	if(r<N-1)
	{
		if(r==-1)
			f=0;
			r++;
		q[r]=data;
	}
}
int dequeue()
{
	int tmp;
	if(f>-1)
	{
		
		tmp=q[f];
		if(f==r)
			f=r=-1;
		else
			f++;
		return tmp;
	}
}
int isempty()
{
	if(f==-1 && r==-1)
		return 1;
	else 
		return 0;
		
}

struct node 
{
	int data;
	struct node *next;
}**heads;
int* visited;
struct node* newnode(int dat)
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	new->data=dat;
	new->next=NULL;
	return new;
}
void insert(struct node **head,int s,int d)
{
	
	struct node *new=newnode(d);
	if(head[s]==NULL)
	{
		new->next=NULL;
		head[s]=new;
	}
	else
	{
		new->next=head[s];
		head[s]=new;
		
	}
}
int degree(struct node *head)
{
	int c=0;
	while(head!=NULL)
	{
		c++;
		head=head->next;
	}
	return c;
}
void display(struct node *head,int f)
{
	struct node *tmp=head;
	printf("%d",f);
		while(tmp != NULL)
	{
		printf("->  %d",tmp->data);
		tmp=tmp->next;
	}
	printf("= %d \n",degree(head));
	

}
void DFSTraversal(struct node **head,int s)
{
	struct node *tmp=head[s];
	visited[s]=1;
	printf("%d\t",s);
	while(tmp!=NULL)
	{
		int con=tmp->data;
		if(visited[con]==0)
		{
			DFSTraversal(head,con);
		}
		tmp=tmp->next;
	}
	
}
void BFStraversal(struct node **head,int s)
{
	struct node *tmp=head[s];
	visited[s]=1;
	enqueue(s);
	printf("%d\t",s);
	while(!isempty())
	{
		int con=dequeue();
		tmp=head[con];
		while(tmp!=NULL)
		{
			if(visited[tmp->data]==0)
			{
				enqueue(tmp->data);
			visited[tmp->data]=1;
			printf("%d\t",tmp->data);
			}
			tmp=tmp->next;
		}
	}
}
int main()
{
	int v,e,i,s,d;
	
	printf("Enter total number of vertex");
	scanf("%d",&v);
	printf("Enter total number of edges");
	scanf("%d",&e);
	heads=(struct node *)malloc(sizeof(struct node *)*v);
	visited=(int *)malloc(sizeof(int)*v);
	
	for(i=0;i<e;i++)
	{
		heads[i]=NULL;
		visited[i]=0;
	}
	for(i=0;i<e;i++)
	{
		printf("Enter source and destnation vertex");
		scanf("%d %d",&s,&d);
	
		insert(heads,s,d);
		
		insert(heads,d,s);
	}
	for(i=0;i<v;i++)
	{
		display(heads[i],i);
	}
	printf("Depth frst traversal\n");
	DFSTraversal(heads,0);	
	for(i=0;i<e;i++)
	{
		visited[i]=0;
	}
	printf("\nBreth first traversal\n");
	BFStraversal(heads,0);
}
