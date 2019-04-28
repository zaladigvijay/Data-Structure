#include<stdio.h>
#include<string.h>
void remov(char *str);
void main()
{
	char *str;
	printf("Enter string  : ");
	scanf("%s",str);
	remov(str);
}
void remov(char *str)
{
	char c[50],new[50];
	int f[50],i,pos=0,fl=0,k=0;
	while(*str!='\0')
	{
		if(isalpha(*str))
		{
			new[k]=*str;
			k++;
			str++;
		}
		else
		{
			fl=0;
			for(i=0;i<pos;i++)
			{
				if(c[i]==*str)
				{
						f[i]++;
						fl=1;
						break;					
				}					
			}
			if(fl==0)
			{	
				c[pos]=*str;
				f[pos]=1;
				pos++;
			}	
			str++;
		}
	}
	new[k]='\0';
	printf("%s\n",new);
	for(i=0;i<pos;i++)
	{
		printf("%c   %d \n",c[i],f[i]);
	}
	
}

