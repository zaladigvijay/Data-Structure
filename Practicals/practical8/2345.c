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
struct node *q[10];
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
void levelorder(struct node *root)
{
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
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		
		postorder(root->right);
		printf("%d\t",root->data);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);	
		preorder(root->right);
	}
}
int main()
{
	struct node *root;
	root=create(15);
	
	root->left=create(10);
	root->right=create(19);

	 root->left->left=create(5);
	root->left->right=create(12);

	root->right->left=create(17);
	root->right->right=create(22);
	printf("Binary tree created\n level order traversal\n");
	levelorder(root);
	printf("\nInorder traversal\n");
	inorder(root);

	printf("\npostorder traversal\n");
	postorder(root);

	printf("\npreorder traversal\n");
	preorder(root);
	
}
