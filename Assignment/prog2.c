#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *next;	
}*head;
int count=0;
FILE *fp;
struct node * create(int val)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
}
void subsets()
{
	int c = pow(2,count),i,j;
	
	for (i = 0; i < c; i++)
	{
		printf("{");
		for (j = 0; j < count; j++)
		{
		
			if ((i & (1 << j)) > 0)
				printf(" %d ",nodevalue(j));
	
		}
		printf("}\n");
	}
}
int nodevalue(int j)
{
	struct node *tmp;
	tmp=head;
	int i;
	for(i=0;i<count;i++)
	{
		if(i==j)
		{
			return tmp->data;
		}
		else
		{
			tmp=tmp->next;
		}
	}
}
void insert(int val)
{
	struct node *new=create(val);
	if(head==NULL)
	{
		head=new;
		count++;
	}
	else
	{
		new->next=head;
		head=new;
		count++;
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
	fp=fopen("prog2.txt","r");
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
	printf("Link list element\n");
	display();
	printf("\nSubset of linklist \n");	
	subsets();
	fclose(fp);
}
