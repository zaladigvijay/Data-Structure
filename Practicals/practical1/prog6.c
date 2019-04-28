#include<stdio.h>
void sort(int a[],int n);
void main()
{
	int n,a[10],i;
	printf("Number of arrayn element");
	scanf("%d",&n);
	printf("Enter array data");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	sort(a,n);
	
}
void sort(int  a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("Array dta after sort");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
