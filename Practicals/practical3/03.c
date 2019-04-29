#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("\n enter a number=");
    scanf("%d",&n);
    printf("\n the %d number in fibonacci series is=%d",n,fibonacci(n));
}
int fibonacci(int n)
{
    if(n==1)
         return 1;
    else if(n==0)
         return 0;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}
