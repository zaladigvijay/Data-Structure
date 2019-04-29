#include<stdio.h>
#include<conio.h>
int pow(int,int);
int main()
{
    int n,p;
    printf("\n enter vale of n=");
    scanf("%d",&n);
    printf("\n enter the value of p=");
    scanf("%d",&p);
    printf("\n answer=%d",pow(n,p));

}
int pow(int n,int p)
{
    if(p==0)
        return 1;
    else
        return(n*pow(n,p-1));
}
