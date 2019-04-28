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
int search(struct Node *tmp,int val)
{
	if(tmp==NULL)
		return 0;
	else if(tmp->data == val)
		return 1;
	search(tmp->next,val);
}

int main()
{
	int ch=1,val;	
	while(ch!=0)
	{
		insert();
		printf("Enter 0 for end");
		scanf("%d",&ch);
	}
	display();
	printf("Enter search value");
	scanf("%d",&val);
	if(search(head,val))
		printf("value found");
	else
		printf("value not found");
}


