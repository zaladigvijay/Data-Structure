#include<stdio.h>
void bubbleasc(int a[],int n)
{
	int i,j,tmp;;
	if(n==1)
		return;
	
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{	
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}

	bubbleasc(a,n-1);
}
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
	bubbleasc(a,n);		
	printf("\nArray sorted in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
