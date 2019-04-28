#include<stdio.h>
#include<string.h>
void reverse(char *str);
void main()
{
	char *str;
	printf("Enter string  : ");
	scanf("%s",str);
	reverse(str);
}
void reverse(char *str)
{
	char rev[50],*dummy=str;
	int i;
	int c=strlen(str);
	str=str+c-1;
	for(i=0;i<c;i++)
	{
			rev[i]=*str;
			str--;
	}
	rev[i]='\0';
	printf("Reverse string = %s\n",rev);
	if(strcmp(dummy,rev)==0)
	{
			printf("Strnig is palindogram ");
	}
	else
	{
		printf("Strnig is not palindogram ");
	}
}
