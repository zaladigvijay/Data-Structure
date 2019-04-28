#include<stdio.h>
void evenorodd(char *str)
{
	int n=atoi(str);
	if(n&1==1)
		printf("%d is odd ",n);
	else
		printf("%d is even ",n);	
}
void main()
{
	char str[10];
	printf("Enter string : ");
	gets(str);
	evenorodd(str);	
}
