#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int n;
    printf("\n enter value for n=");
    scanf("%d",&n);
    printf("\n answer=%d",sum(n));
}
int sum(int n)
{
    if(n==1)
         return 1;
    else if(n==0)
         return 0;
    else
         return n+sum(n-1);
}
