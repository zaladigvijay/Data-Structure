#include<stdio.h>
void merge(int a[],int b[],int n)
{
	int i,c[n*2];
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		c[n+i]=b[i];
	}
	for(i=0;i<n*2;i++)
	{
		printf("%d \t",c[i]);
	}
		
}
void main()
{
	int a[10],b[5],n,i;
	printf("Enter size of  array : ");
	scanf("%d",&n);
	printf("Enter array1 data :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter array2 data :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,b,n);
}
