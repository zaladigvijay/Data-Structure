#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *next,*prev;
}*start=NULL,*end=NULL;
struct node *newnode()
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));	
	printf("Enter value = ");
	scanf("%d",&tmp->info);
	tmp->next=tmp->prev=NULL;
	return tmp;
}
void  display()
{
	struct node *tmp;
	tmp=start;
	if(start==NULL)
	{
		printf("EMpty!!");
		return;
	}
		while(tmp->next!=start)
		{
			printf("%d\t",tmp->info);
			tmp=tmp->next;
		}
	printf("%d\t",tmp->info);
		
	printf("\n");
	
	while(tmp->prev!=end)
	{
		printf("%d\t",tmp->info);
		tmp=tmp->prev;
	}
	printf("%d\t",tmp->info);
}
void create()
{
	struct node* new1;
	new1=newnode();
	if(start==NULL)
	{
		start=new1;
		end=new1;
		new1->next=new1;
		new1->prev=end;
	}
}
void finsert()
{
	struct node* new1;
	new1=newnode();
	if(start!=NULL)
	{
		new1->next=start;
		start->prev=new1;
		start=new1;
		new1->prev=end;
		end->next=start;
	}else{
		start=new1;
		end=new1;
		new1->next=new1;
		new1->prev=end;
	}
}
void linsert()
{
	struct node* new1,*tmp;
	new1=newnode();tmp=end;
	tmp->next=new1;
	new1->prev=tmp;
	new1->next=start;
	start->prev=new1;
	end=new1;
}
void fdelete()
{
	struct node *tmp;
	tmp=start;
	if(start->next==start)
	{	start=NULL;
		free(tmp);
	}
	else{
	start=tmp->next;
	start->prev=end;
	end->next=start;
	free(tmp);}
}
void ldelete()
{
	struct node *tmp;
	tmp=end;if(start->next==start)
	{	start=NULL;
		free(tmp);
	}
	else{

	end->prev->next=start;
	end=end->prev;
	start->prev=end;
	free(tmp);}
}

void main()
{
	int ch;
	while(ch)
	{
		printf("\n1:Create a list\n");
		printf("2.Insert as a first node\n");
		printf("3.Insert as a last node\n");
		printf("4.Delete at first\n");
		printf("5.Delete at last\n");
		printf("0.Exit\n");
		printf("Enter ur choice :");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			create();
			display();
			break;
		
		case 2:
			finsert();
			display();
			break;
		
		case 3:
			linsert();
			display();
			break;
			
		case 4:
			fdelete();
			display();
			break;
			
		case 5:
			ldelete();
			display();
			break;
			
		
		case 0:
			exit(0);
			break;
		
	}
	}
}

