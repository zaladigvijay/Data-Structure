#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int n;
    printf("\n enter a number=");
    scanf("%d",&n);
    printf("\n factorial of given number is=%d",fact(n));
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
