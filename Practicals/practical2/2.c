#include<stdio.h>
#include<string.h>
void replace(char *,char *,char *);
void main()
{
	char *str,search[50],find[50];
	int c;
	printf("Enter string : ");
	gets(str);
	printf("Enter search string : ");
	scanf("%s",search);
	printf("Enter Replace string : ");
	scanf("%s",find);
//	printf("%s",search);
	replace(str,search,find);
}
void replace(char *str,char *search,char *find)
{
	char *pos,*ne;
	int c,i;
	
	pos=strstr(str,search);
	c=pos-str;
	if(c<0)
	{
		printf("String not found : ");
	}
	else
	{
		
		for(i=0;i<c;i++,str++)
			printf("%c",*str);
		while(*find!='\0')
		{
			printf("%c",*find);	
			find++;
		}
		str=str+strlen(search);
		while(*str!='\0')
		{
				printf("%c",*str);
				str++;
		}
				
		
	}	
}
