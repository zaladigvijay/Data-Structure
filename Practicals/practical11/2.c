#include<stdio.h>
void main()
{
	int a[10],i,j,n,tmp,min;
	int ch; 
	printf("Enter total array element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Unsorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	for(i=0;i<n;i++)
	{
			
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{	
				tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}

	printf("\nArray sorted in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
