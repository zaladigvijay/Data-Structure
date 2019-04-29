#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int main()
{
    int no1,no2;
    printf("\n enter number1=");
    scanf("%d",&no1);
    printf("\n enter number2=");
    scanf("%d",&no2);
    printf("\n gcd of %d and %d is=%d",no1,no2,gcd(no1,no2));
}

int gcd(int no1,int no2)
{
    if(no2!=0)
        return gcd(no2,no1%no2);
    else
        return no1;
}
