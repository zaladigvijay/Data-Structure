#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*head=NULL,*end=NULL;
void create(int n)
{
	struct node *new,*tmp;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	tmp=head;
	if(head==NULL)
		head=new;
	else
		end->next=new;
	end=new;
}
void display()
{
	struct node* tmp;
	tmp=head;
	if(head==NULL)
		printf("\nlist is Empty\n");
	else
	{
		printf("\n----Elements----\n");
		while(tmp->next!=NULL)
		{
			printf("%d\t",tmp->data);
			tmp=tmp->next;
		}
		printf("%d\t",tmp->data);
	}	
}
struct node* mid(struct node* start,struct node* last)
{
	struct node *s,*f;
	if(start==NULL)
		return NULL;
	s=head;
	f=head->next;
	while(f!=last)
	{
		s=s->next;
		f=f->next;
	}
	return s;
}
int search(int a)
{
	struct node *start,*last,*m;
	start=head;
	last=NULL;
	do
	{
		m=mid(start,last);
		if(m==NULL)
			return 0;
		if(m->data==a)
			return 1;
		else if(m->data<a)
			start=m->next;
		else
			last=m;	
	}while(last==NULL || last!=start);
	return 0;
}
void main()
{
	int c,n,i,tmp,f=0,a;
	printf("Enter no of nodes = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&c);
		create(c);
	}
	display();
	printf("\nEnter data you want to search = ");
	scanf("%d",&a);
	f=search(a);
	if(f!=0)
		printf("%d is found\n",a);
	else
		printf("%d is not available\n",a);	
}
