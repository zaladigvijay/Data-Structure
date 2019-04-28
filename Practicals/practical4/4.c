#include<stdio.h>
#include<string.h>
#define N 20
char s[N];
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
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
char pop()
{
	char tmp;
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
	char *in,pre[20],tmp;
	int i=0;
	printf("Enter infix expression : ");
	gets(in);
	strcpy(in,(strrev(in)));
	while(*in!='\0')
	{
		if((*in>='a' && *in<='z') ||(*in>='A' && *in<='Z') ||(*in>=0 && *in<=9))
		{
			pre[i]=*in;
			i++;
		}
		else if(*in ==')')
		{
			push(*in);				
		}
		else if(*in == '(')
		{
			tmp=pop();
			while(tmp!=')' )
			{
				pre[i]=tmp;
				i++;
				if(isEmpty()==0)
					tmp=pop();
			}
		}
		else
		{
			push(*in);
		}
		in++;
	}
	while(isEmpty()==0)
	{
		pre[i]=pop();
		i++;
	}
	pre[i]='\0';
	printf("Prefix Expression : %s ",strrev(pre));
	
}

