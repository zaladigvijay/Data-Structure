#include<stdio.h>
#include<string.h>
void main()
{
	char st[20],rst[20],*ptr;
	int i;
	printf("Enter string");
	scanf("%s",st);
	ptr=rst;
	i=strlen(st)-1;
	while(i>=0)
	{
		
		*ptr=st[i];
		i--;
		ptr++;
	}
	*ptr='\0';
	
	if(strcmp(st,rst)==0)
	{
		printf("String is palidogram");
	}
	else
	{
		printf("String is  not palidogram");
	}
}
