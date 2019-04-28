#include<stdio.h>
void main()
{
	int a[10],i,j,n,tmp;
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
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{	
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}

	printf("\nArray sorted in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
