#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*head=NULL,*end=NULL;
void create(int n)
{
	struct node *new,*tmp;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	tmp=head;
	if(head==NULL)
		head=new;
	else
		end->next=new;
	end=new;
}
void display()
{
	struct node* tmp;
	tmp=head;
	if(head==NULL)
		printf("\nlist is Empty\n");
	else
	{
		printf("\n----Elements----\n");
		while(tmp->next!=NULL)
		{
			printf("%d\t",tmp->data);
			tmp=tmp->next;
		}
		printf("%d\t",tmp->data);
	}	
}
void selection()
{
	int t3;
	struct node *t1,*t2;
	t1=head;
	while(t1->next!=NULL)
	{
		t2=t1->next;
		while(t2)
		{
			if(t1->data > t2->data)
			{
				t3=t1->data;
				t1->data=t2->data;
				t2->data=t3;	
			}
			t2=t2->next;
		}
		t1=t1->next;
	}
}
void main()
{
	int c,n,i,tmp;
	printf("Enter no of nodes = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&c);
		create(c);
	}
	display();	
	selection();
	display();
}
