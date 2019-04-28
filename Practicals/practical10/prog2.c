#include<stdio.h>
int main()
{
	int a[20][20]={0},i,j,k,n=6,indeg,outdeg;
	a[0][1]=1;
	a[0][2]=1;
	a[1][2]=1;
	a[1][3]=1;
	a[2][4]=1;	
	a[3][5]=1;	
	a[4][3]=1;
	a[4][5]=1;
	for(k=0;k<n;k++)
	{
			outdeg=0;
			for(j=0;j<n;j++)
			{
				if(a[k][j]!=0)
				{
					printf("(%d,%d)\t",k,j);
					outdeg++;
				}
			}
			printf("\noutDegree of vertex %d is %d\n",k,outdeg);
			indeg=0;
			for(i=0;i<n;i++)
			{
				if(a[i][k]!=0)
					indeg++;
			}
			printf("inDegree of vertex %d is %d\n\n",k,indeg);		
	}
}

