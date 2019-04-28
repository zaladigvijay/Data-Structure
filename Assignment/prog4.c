#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next;	
}*head;
FILE *fp;
struct node * create(int val)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
}
void insert(int val)
{
	struct node *new=create(val);
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head=new;
	}
}
void removeduplicate()
{
	struct node *tmp,*curr,*del,*prev;
	tmp=head;
	while(tmp)
	{
		curr=tmp->next;
		prev=tmp;
		while(curr)
		{
			if(curr->data == tmp->data)
			{
				del=curr;
				
				prev->next=curr->next;
				curr=curr->next;
				free(del);
		
			}
			else
			{
				prev=curr;
			curr=curr->next;
				
			}
			
		}
		tmp=tmp->next;		
	}
}
void display()
{
	struct node *tmp;
	tmp=head;
	while(tmp)
	{
		printf("\n%d",tmp->data);
		tmp=tmp->next;
	}
}
int main()
{
	fp=fopen("pro4.txt","r");
	int val,i;
	if(fp == NULL)
	{
		printf("File Not found\n");
		exit(0);	
	}	
	while((fscanf(fp,"%d",&val))!= EOF)
	{
		insert(val);
	}
	printf("Link list element");
	display();
	removeduplicate();
	printf("\nLink list after remove duplicate ");
	display();
	fclose(fp);
}
