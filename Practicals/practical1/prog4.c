#include<stdio.h>

void main()
{
	int x;
	printf("Enter x");
	scanf("%d",&x);
	printf("f(x)=5x^2+10x+3\n");
	printf("Answer of f(%d)=%d",x,5*(x*x)+10*x+3);
}
