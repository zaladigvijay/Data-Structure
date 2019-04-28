#include<stdio.h>
void rotate(int arr[],int d,int n)
{
	int new[n],i,pos=0;
	for(i=d;i<n;i++)
	{
			new[pos]=arr[i];
			pos++;
	}
	for(i=0;i<d;i++)
	{
		new[pos]=arr[i];
		pos++;		
	}
	printf("Array after rotate %d place ",d);
	for(i=0;i<n;i++)
	{
		printf("%d\t",new[i]);
	}
	
}
void main()
{
	int arr[10],n,d,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter d : ");
	scanf("%d",&d);
	printf("Eneter array data :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
	rotate(arr,d,n);	
}
