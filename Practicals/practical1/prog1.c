#include<stdio.h>
void swap1(int ,int);
void swap2(int *,int *);
void main()
{
	int x1,y1,x,y;
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	printf("Enter x1 :");
	scanf("%d",&x1);
	printf("Enter y1 :");
	scanf("%d",&y1);
	printf("value of x and y before swap \n");
	printf("X=%d \nY= %d\n",x,y);
	swap1(x,y);
	printf("Value of x1 and y1 before swap\n");
	printf("X1=%d \nY1= %d\n",x1,y1);
	swap2(&x1,&y1);
	printf("value of x and y after swap call by reference\n");
	printf("x1=%d\ny1=%d\n",x1,y1);
	
}	
void swap1(int x ,int y)
{
	int tmp;
	tmp=x;
	x=y;
	y=tmp;
	printf("value of x and y after swap call by value\n");
	printf("x=%d\ny=%d\n",x,y);

}
void swap2(int *x,int *y)
{	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
	
}
