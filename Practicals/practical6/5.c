#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head=NULL;
void insert()
{	
	struct Node *new=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter value");
	scanf("%d",&new->data);
	struct Node *curr=head;
	if(curr==NULL)
	{
		head=new;
		new->next=NULL;
	}
	else
	{
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=new;
		new->next=NULL;
	}
}
void display()
{
	struct Node *tmp=head;
	if(tmp==NULL)
	{
		printf("\nlist empty");
		return;
	}
	printf("List elements \n\n");
	while(tmp!=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}	
}
int length()
{
	int c=0;
	struct Node *tmp=head;
	while(tmp!=NULL)
	{
		tmp=tmp->next;
		c++;
	}
	return c;
}
int lengthr(struct Node *root)
{
	static int c=0;
	if(root == NULL)
		return c;
		c++;
	lengthr(root->next);
}
int main()
{
	int ch=1;	
	while(ch!=0)
	{
		insert();
		printf("Enter 0 for end");
		scanf("%d",&ch);
	}
	display();
	printf("\nlength of linklist  : %d",length());
	printf("\nlength of linklist  : %d",lengthr(head));
}

