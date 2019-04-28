#include<stdio.h>
void main()
{
	int a[10],i,n,val;
	int f=0; 
	printf("Enter total array element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter value for search ");
	scanf("%d",&val);	
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("value not found");
	}
	else
	{
		printf("value found");
	}

}
