#include<stdio.h>
#define N 10
int s[20];
int top=-1;
void push(char val)
{
	if(top == N-1)
		printf("Stack overflow\n");
	else
	{
		top++;
		s[top]=val;
	}		
}
int pop()
{
	int tmp;
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
int main()
{
	char* post;
	int n1,n2;
	printf("Enter postfix expression : ");
	gets(post);
	printf("postfix expression : %s",post);
	while(*post!='\0')
	{
		if(*post>'0' && *post <'9')
			push(*post-48);
		else
		{
			switch(*post)
			{
				case '+':
					n2=pop();
					n1=pop();
					push(n2+n1);
					break;
				case '-':
					n2=pop();
					n1=pop();
					push(n2-n1);
					break;
				case '*':
					n2=pop();
					n1=pop();
					push(n2*n1);
					break;
				case '/':
					n2=pop();
					n1=pop();
					push(n2/n1);
					break;
				
					
			}
		}
		post++;
	}
	printf("\nResult is =%d",pop());
}
