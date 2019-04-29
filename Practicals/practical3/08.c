#include<stdio.h>
#include<conio.h>
int countdigit(int n);
int sumdigit(int n);
int main()
{
    int n;
    printf("\n enter value for n=");
    scanf("%d",&n);
    printf("\n total number of digit in %d is=%d",n,countdigit(n));
    printf("\n sum of %d is=%d",n,sumdigit(n));
}
int countdigit(int n)
{
    if(n==0)
        return 0;
    else
        return 1+countdigit(n/10);
}
int sumdigit(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)+sumdigit(n/10);
}
