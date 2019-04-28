#include<stdio.h>
void sum(int a[][3]);
void main()
{
	int n,a[3][3],i,j;
	
	printf("Enter array data");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	sum(a);
	
}
void sum(int  a[][3])
{
	int i,j,tmp=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmp+=a[i][j];
		}
	}
	printf("Sum = %d ",tmp);
}
