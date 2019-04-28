#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;	
}*start=NULL;
struct node * newnode()
{
	struct node *tmp=(struct node *)malloc(sizeof(struct node));
	printf("Enter daTA");
	scanf("%d",&tmp->data);
	tmp->next=NULL;
	return tmp;
}
void display()
{
	struct node *tmp;
	tmp=start;
	if(tmp==NULL)
		return;
	
	while(tmp->next!=start)
	{
		printf("%d \t",tmp->data);
		tmp=tmp->next;
	}
	
	printf("%d->",tmp->data);
} 
void create()
{
	struct node *new=newnode();
	if(start==NULL)	
	{
		start=new;
		new->next=start;
		display();
	}
	else
	{
		printf("list already exists\n");
	}
	
}
void insertfirst()
{
	struct node *new,*tmp=start;
	new=newnode();	
	new->next=start;
	while(tmp->next!=start)
	{
		tmp=tmp->next;
	}
	start=new;	
	tmp->next=start;
	display();
}
void insertlast()
{
	struct node *tmp=start;
	struct node *new=newnode();

	while(tmp->next!=start)
	{
		tmp=tmp->next;
		
	}
	tmp->next=new;
	new->next=start;
	display();
}
void deletefirst()
{
	struct node *tmp,*cur;
	tmp=start;
	cur=start;
	while(cur->next!=start)
	{
		cur=cur->next;
	}
	
	start=start->next;
	cur->next=start;
	free(tmp);
	display();
}
void deletelast()
{
	struct node *tmp,*prev;
	tmp=start;
	prev=start;
	while(tmp->next!=start)
	{
		prev=tmp;
		tmp=tmp->next;
	}
	prev->next=start;
	free(tmp);
	display();
}
int menu()
{
	int ch;
		printf("\n1.create \n");
		printf("2.insert first\n");
		printf("3.insert last\n");
		printf("4.delete first\n");
		printf("5.delete last\n");
		printf("0.exit\n");
		printf("Enter choice");
		scanf("%d",&ch);
		return ch;
}
int main()  
{
	
	while(1)
	{
			switch(menu())
			{
				case 1:
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
				case 0:
						exit(0);
						break;
						 
			}
	
	}
	
}

