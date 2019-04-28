#include<stdio.h>
void main()
{
	int a[10],n,i,tmp;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter Array data  : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		if(i%2==0)
		{
			if(a[i]>a[i+1])
			{
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;	
			}
			
		}
		else
		{
			if(a[i]<a[i+1])
			{
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;		
			}		
				
		}
	}
	for(i=0;i<n;i++)
	{
			printf("%d \t",a[i]);
	}
	
}
