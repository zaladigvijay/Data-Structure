#include<stdio.h>
#include<string.h>
#define N 50
char s[N];
char tmp_s[N];
int top1=-1;
int top2=-1;
void push(char val)
{
	if(top1 != N-1)
	{
		top1++;
		s[top1]=val;
	}		
}
int isEmpty()
{
	if(top1==-1)
		return 1;
	else
		return 0;
}
char pop()
{
	char tmp;
	if(top1!=-1)
	{
		tmp=s[top1];
		top1--; 		
	}
	return tmp;
}
void push_tmp(char val)
{
	if(top2 != N-1)
	{
		top2++;
		tmp_s[top2]=val;
	}		
}
void display_tmp()
{
	int i;
	if(top2==-1)
		printf("Stack undeflow\n");
	else
	{
		printf("\nSorted stack\n");
		for(i=top2;i>-1;i--)
		{
				printf("%c",tmp_s[i]);
		}	
	}
}
void display()
{
	int i;
	if(top1==-1)
		printf("Stack underflow");
	else
	{
			printf("\nUnsorted stack\n");
			for(i=top1;i>-1;i--)
			{
				printf("%c",s[i]);
			}
	}
			
}
char pop_tmp()
{
	char tmp;
	if(top2!=-1)
	{
		tmp=tmp_s[top2];
		top2--; 		
	}
	return tmp;
}
char peek_tmp()
{
	char tmp;
	if(top2!=-1)
	{
		tmp=tmp_s[top2]; 		
	}
	return tmp;
}
int isEmpty_tmp()
{
	if(top2==-1)
		return 1;
	else
		return 0;
}
int main()
{
	
	char tmp;
	printf("Enter string");
	gets(s);
	
	top1=strlen(s)-1;
	printf("%d",top1);


	display();
	while( ! isEmpty())
	{
		tmp=pop();		
		while(tmp>peek_tmp() && ! isEmpty_tmp())
		{
			push(pop_tmp());
		}
		push_tmp(tmp);					
	
	}

	display_tmp();
	
}
