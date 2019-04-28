#include<stdio.h>
#define N 10
int s[N];
int top=-1;
void push(int val)
{
	if(top == N-1)
		printf("Stack overflow\n");
	else
	{
		top++;
		s[top]=val;
		printf("%d pushed\n",val);		
	}		
}
int pop()
{
	int tmp=0;
	if(top==-1)
	{
		printf("Stack undeflow\n");
		
		
	}		
	else
	{
		tmp=s[top];
		top--;
 		
	}
	return tmp;

}
int peek()
{
	int tmp=0;
	if(top==-1)
	{
		printf("Stack undeflow\n");		
	}		
	else
	{
		tmp=s[top]; 		
	}
	return tmp;
}
int peep(int i)
{
	int tmp=0;
	if(top-i+1<0)
		printf("Stack underflow ");
	else
		tmp=s[top-i+1];
	return tmp;
}
void change(int i,int val)
{
	if(top-i+1<0)
		printf("Stack underflow ");
	else
	{
			s[top-i+1]=val;
			printf("Valued change\n");
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("Stack undeflow\n");
	else
	{
		printf("\nStack elements\n");
		for(i=top;i>-1;i--)
		{
			if(i==top)
				printf("%d---top\n",s[i]);
			else
				printf("%d\n",s[i]);
		}	
	}
}
int main()
{
	int ch,con=1,val,i;
	while(con)
	{
		printf("--------Menu---------\n");
		printf("1.Push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.peep\n");
		printf("5.change\n");
		printf("6.Display\n");
		printf("Enter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				printf("Enter value for push :");
				scanf("%d",&val);
				push(val);
				break;
			case 2 :
				val=pop();
				printf("Popped value = %d\n",val);
				break;
			case 3:
				val=peek();
				printf("Peeked value = %d\n",val);
				break;
			case 4:
				printf("Enter i for peep value");
				scanf("%d",&i);
				val=peep(i);
				printf("Peeped value = %d\n",val);
			case 5:
				printf("Enter i for peep value");
				scanf("%d",&i);
				printf("Enter value for change");
				scanf("%d",&val);
				change(i,val);
				break;
			case 6:				
				display();
				break;
			default:
				printf("Invalid choice Try again\n");
				break;				
		}
	}
}
