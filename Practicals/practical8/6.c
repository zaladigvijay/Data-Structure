#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node* create(int val)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=val;
	tmp->right=tmp->left=NULL;
	return tmp;
}
struct node * q[10];
int front=-1;
int rear=-1;
int isempty()
{
	if(front==-1)
		return 1;
	else
		return 0;
}
void enqueue(struct node *s)
{
	if(rear>=10)
		return;
	if(rear==-1)
	{
		rear=front=0;
		q[rear]=s;
	}
	else
	{
		rear++;
		q[rear]=s;
	}
}
struct node* dequeue()
{
	struct node *tmp=NULL;	
	if(front==-1)
		return tmp;
	else
	{
		tmp=q[front];
		if(front==rear)
			front=rear=-1;
		else
			front++;
		return tmp;
	}
	
}
void levelorderinsert(struct node *root,int val)
{
	front=rear=-1;
	struct node *tmp=root;
	enqueue(tmp);
	while(!isempty())
	{
		tmp=dequeue();
		if(tmp->left==NULL)
		{
			tmp->left=create(val);
			break;
		}
		else
			enqueue(tmp->left);
		if(tmp->right==NULL)
		{
			tmp->right=create(val);
			break;	
		}	
		else
			enqueue(tmp->right);		
	}
}
void levelorder(struct node *root)
{
	front=rear=-1;
	struct node *tmp=root;
	enqueue(tmp);
	while(!isempty())
	{
		tmp=dequeue();
		if(tmp->left!=NULL)
			enqueue(tmp->left);
		if(tmp->right!=NULL)
			enqueue(tmp->right);
		printf("%d\t",tmp->data);
	}
}

int main()
{
	struct node *root;
	int val;
	root=create(15);
	
	root->left=create(10);
	root->right=create(19);

	levelorder(root);
	
	printf("\nEnter value for insert");
	scanf("%d",&val);

	levelorderinsert(root,val);
	printf("\n");
	levelorder(root);
	
}
