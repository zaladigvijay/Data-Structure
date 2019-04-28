#include<stdio.h>
void main()
{
	int a[50],*ap,i,n;
	
	for(i=0;i<50;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);

	}
	ap=a;
	printf("Arraya data \n");
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("A[%d]=%d\n",i,*ap);
		ap++;
	}
		
}
