#include<stdio.h>
void replace(char *str,int i ,char c)
{
	*(str+i)=c;
}
void main()
{
	char *str,c;
	int i;
	printf("Enter string  : ");
	scanf("%s",str);
	printf("Enter index number : ");
	scanf("%d",&i);
	fflush(stdin);
	printf("Enter New character : ");
	scanf("%c",&c);
	replace(str,i,c);
	printf("String after replace : %s",str);
}
