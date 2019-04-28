#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
}*start=NULL;
FILE *fp;
struct node * newnode()
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	if(	fscanf(fp,"%d",&tmp->data) != EOF)
	{
	}
	else 
	{
		printf("Enter data value  : ");
		scanf("%d",&tmp->data);
	}

	tmp->next=tmp->prev=NULL;
	return tmp;
}
void display()
{
	struct node *tmp;
	tmp=start;
	if(tmp==NULL)
	{
		printf("list is empty");
		return;
	}
	
	printf("List in forward direction \n");
	while(tmp->next!=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
	printf("%d\t",tmp->data);
	printf("\nList in backward direction \n");
	while(tmp->prev!=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->prev;
	}
	printf("%d\t",tmp->data);
		
}
int menu()
{
	int ch;
	printf("\n1.create \n");
	printf("2.insert first\n");
	printf("3.insert last\n");
	printf("4.delete first\n");
	printf("5.delete last\n");
	printf("6.insert location\n");
	printf("7.delete location\n");
	printf("0.Exit\n");
	printf("Enter choice");
	scanf("%d",&ch);
	return ch;	
}
void create()
{
	if(start!=NULL)
		printf("list is already exists");
	else
	{
		struct node *new=newnode();
		start=new;
		display();
	}		
}
void insertfirst()
{
	struct node *new=newnode();
	if(start==NULL)
	{
		start=new;
	}
	else
	{
		new->next=start;
		new->next->prev=new;
		start=new;
	}
	display();
	
}
void insertmiddle(int val)
{
	struct node *new,*curr;
	new=newnode();
	curr=start;

	while(curr != NULL)
	{
		if(curr->data == val)
		{
			curr->prev->next=new;	
			new->prev=curr->prev;
			new->next=curr;
			curr->prev=new;
			break;
		}
		curr=curr->next;		
	}
	display();
	
} 
void deletemiddle(int val)
{
	struct node *curr;
	curr=start;

	while(curr != NULL)
	{
		if(curr->data == val)
		{
			if(curr->next== NULL)
			{
				curr->prev->next=curr->next;	
			}
			else
			{
				curr->prev->next=curr->next;
				curr->next->prev=curr->prev;
			}
			
			free(curr);
			break;
		}
		curr=curr->next;		
	}
	display();
	
} 
void insertlast()
{
	struct node	*new,*tmp;
	new=newnode();
	tmp=start;
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	tmp->next=new;
	new->prev=tmp;
	display();
}
void deletefirst()
{
	struct node *tmp=start;
	start=start->next;
	tmp->next->prev=NULL;
	if(start->next==NULL)
		start=NULL;
	free(tmp);
	display();
	
}
void deletelast()
{
	struct node *tmp;
	tmp=start;
	if(tmp->next==NULL)
		start=NULL;
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	tmp->prev->next=NULL;
	
	free(tmp);
	display();
}
int main()
{
	int val;
	fp=fopen("pro13.txt","r");
	if(fp== NULL)
	{
		printf("File not found !");
		exit(0);
	}
	while(1)
	{
		switch(menu())
		{
			case 1 :
				create();
				break;
			case 2:
				insertfirst();
				break;
			case 3:
				insertlast();
				break;
			case 4:
				deletefirst();
				break;
			case 5:
				deletelast();
				break;
			case 6:
				printf("Enter value before insert new node :");
				scanf("%d",&val);
				insertmiddle(val);
				break;
			case 7:
				printf("Enter value delete  new node :");
				scanf("%d",&val);
				deletemiddle(val);
				break;
			case 0 :
				exit(0);
				break;
		}
	}
	
}
