#include<stdio.h>
#define N 10
char a[N];
int top=-1;
FILE *fp;
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
void push(char val)
{
		if(isfull()==1)
		{
			printf("\nStack is overflow");
		}
		else
		{
			top++;
			a[top]=val;			
		}
}
char pop()
{
	char tmp;
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
int main()
{
	char c,tmp;
	int flag=0;
	fp=fopen("exp.txt","r");
	printf("Expression is : ");
	while((c=getc(fp)) != EOF)
	{
		printf("%c",c);
		if(c=='(')
			push(c);
		else if(c==')')
		{
			if(pop()!='(')
			{
				flag=1;
				break;
			}
		}
		else if(c=='{')
			push(c);
		else if(c=='}')
		{
			if(pop()!='{')
			{
				flag=1;
				break;
			}
		}
		else if(c=='[')
			push(c);
		else if(c==']')
		{
			if(pop()!='[')
			{
				flag=1;
				break;
			}
		}	
	}
	if(flag==1 || !isempty())
		printf("\nExpression is not balance parenthesis");
	else
		printf("\nExpression is balance parenthesis");	
	fclose(fp);
}
