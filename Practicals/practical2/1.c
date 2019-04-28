#include<stdio.h>
#include<string.h>
int length(char *);
int compare(char * ,char *);
void copy(char *,char *);
void concate(char *,char *);
int main()
{
	char *str,*str1;
	char con[10];
	printf("Enter string : ");
	gets(str);
	//fflush(std);
	printf("Enter new string ");
	gets(con);
	printf("\nlength is : %d ",(length(str)));
	copy(str,str1);
	printf("\nString 1 after copy : %s ",str1);
	
	if(compare(str,str1)==0)
	{
			printf("\nBoth string are same ");
	}
	else
	{
		printf("\nBoth string not match");
	}
	concate(con,str);
	printf("\nConacated sttring  : %s",con);		
	
}
int length(char *str)
{
	int c=0;
	while(*str!='\0')
	{
		c++;
		str++;
	}
	return c;
}
void copy(char *str,char *str1)
{
	while(*str!='\0')
	{
		*str1=*str;
		str1++;
		str++;
	}
	*str1='\0';	
}
int compare(char *str,char *str1)
{
	if(strlen(str)!=strlen(str1))
	{
			return 1;
	}
	while(*str!='\0'&&*str1!='\0')
	{
		if(*str!=*str1)
			return 1;
			str++;
			str1++;
	}
	return 0;
}
void concate(char *str1,char *str)
{
	while(*str1!='\0')
	{
		str1++;
	}
	
	while(*str!='\0')
	{
		*str1=*str;
		str++;
		str1++;
	}
	*str1='\0';
}



