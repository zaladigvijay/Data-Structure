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
	while(tmp)
	{
		printf("%d \t",tmp->data);
		tmp=tmp->next;
	}
} 
void create()
{
	if(start==NULL)	
	{
		start=newnode();
		display();
	}
	else
	{
		printf("list already exists\n");
	}
	
}
void insertfirst()
{
	struct node *new;
	new=newnode();
	new->next=start;
	start=new;
	display();
}
void insertlast()
{
	struct node *tmp=start;
//	struct node *new;
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
		
	}
	tmp->next=newnode();
	display();
}
void deletefirst()
{
	struct node *tmp;
	tmp=start;
	start=start->next;
	free(tmp);
	display();
}
void deletelast()
{
	struct node *tmp,*prev;
	tmp=start;
	prev=start;
	while(tmp->next!=NULL)
	{
		prev=tmp;
		tmp=tmp->next;
	}
	prev->next=NULL;
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

