#include<stdio.h>
#define N 10
int s[N];
int tmp_s[N];
int top1=-1;
int top2=-1;
void push(int val)
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
int pop()
{
	int tmp=0;
	if(top1!=-1)
	{
		tmp=s[top1];
		top1--; 		
	}
	return tmp;
}
void push_tmp(int val)
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
				printf("%d \t",tmp_s[i]);
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
				printf("%d \t",s[i]);
			}
	}
			
}
int pop_tmp()
{
	int tmp=0;
	if(top2!=-1)
	{
		tmp=tmp_s[top2];
		top2--; 		
	}
	return tmp;
}
int peek_tmp()
{
	int tmp=0;
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
	int tmp,i,n,val;
	printf("Enter stack size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value");
		scanf("%d",&val);
		push(val);
	}	
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
