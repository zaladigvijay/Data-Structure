#include<stdio.h>
#define N 10
int a[N];
int top=-1;
void push(int );
int pop();
int peek(int );
void change(int,int);
void display();
int isempty();
int isfull();
void main()
{
	int ch,val,end=1,i;
	while(end)
	{
		printf("----Menu-----");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peek");
		printf("\n4.change");
		printf("\n5.display");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter value for insert : ");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				val=pop();
				if(val!=-1)
					printf("Poped value : %d ",val);

				break;
			case 3:
				printf("\nEnter position : ");
				scanf("%d",&i);
				printf("\npeeked value : %d",peek(i));
				break;
			case 4:
				printf("\nEnter position : ");
				scanf("%d",&i);
				printf("\nEnter new value : ");
				scanf("%d",&val);
				change(i,val);
				break;
			case 5:
				display();
				break;
			default:
				printf("\nInvalid choice : ");
				break;
					
			
				
		}
		printf("\n1.contioue 0.end : ");
		scanf("%d",&end);
	}
}
int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(top==N-1)
		return 1;
	else 
		return 0; 
}
void push(int val)
{
		if(isfull()==1)
		{
			printf("\nStack is overflow");
		}
		else
		{
			top++;
			a[top]=val;
			display();
			
		}
}
int pop()
{
	int tmp;
	if(isempty()==1)
	{
		printf("\nStack is underflow");

		return -1;
	}
	else
	{
		tmp=a[top];
		top--;
		return tmp;
	}	
}
int  peek(int i)
{
	if(top+1-i<0)
		printf("\n Stack underflow");
	else
		return a[top+1-i];
}
void change(int i,int val)
{
	
	if(top+1-i<0)
		printf("\n Stack underflow");
	else
		 a[top+1-i]=val;	
}
void display()
{
	int i;
	if(isempty()==1)
		printf("Stack undeflow");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d \t",a[i]);
		}
	}
}
	
