#include<stdio.h>
void main()
{
	int a[10],i,j,n,val,low,high,mid,tmp;
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
	low=0;
	high=n-1;
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
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==val)
		{
			f=1;
			break;
		}
		else if(a[mid]>val)
		{
			high=mid-1;
		}
		else if(a[mid]<val)
		{
			low=mid+1;
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
