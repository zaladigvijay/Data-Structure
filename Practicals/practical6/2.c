#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head;
void push(int val)
{
	struct Node *new=(struct Node *)malloc(sizeof(struct Node));
	new->data=val;
	new->next=head;
	head=new;
}
int pop()
{
	int val=0;
	if(head==NULL)
		printf("Stack underflow");
	else
	{
		struct Node *tmp=head;
		val=tmp->data;
		head=tmp->next;
		free(tmp);
	}
	return val;
}
void display()
{
	if(head==NULL)
		printf("Stack underflow");
	else
	{
		struct Node *tmp=head;
		while(tmp!=NULL)
		{
			printf("%d\t",tmp->data);
			tmp=tmp->next;
		}
	}	
}
int main()
{
	int ch=1,val;
	while(ch!=0)
	{
		printf("\n1.push\n2.pop\n3.disply\n0.break");
		printf("Enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				printf("popped value %d",pop());
				break;
			case 3:
				display();
				break;
			
		}
	}
	
}
