#include<stdio.h>
int main()
{
	int a[20][20]={0},i,j,n=6,deg;
	a[0][1]=1;
	a[0][2]=1;
	a[1][0]=1;
	a[1][2]=1;
	a[1][3]=1;
	a[2][0]=1;
	a[2][1]=1;
	a[2][4]=1;
	a[3][1]=1;
	a[3][4]=1;
	a[3][5]=1;
	a[4][2]=1;
	a[4][3]=1;
	a[4][5]=1;
	a[5][3]=1;
	a[5][4]=1;
	
	for(i=0;i<n;i++)
	{
		deg=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				printf("(%d,%d)\t",i,j);
				deg++;
			}
		}
		printf("\nDegree of vertex %d = %d\n",i,deg);
		
	}
}

