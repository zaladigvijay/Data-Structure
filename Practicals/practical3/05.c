#include<stdio.h>
#include<conio.h>
int towerofhanoi(int,char,char,char);
int main()
{
    int n;
    printf("\n enter the value of n=");
    scanf("%d",&n);
    towerofhanoi(n,'A','C','B');

}
int towerofhanoi(int n,char source,char temp,char desi)
{
    if(n==1)
    {
        printf("\n move disk 1 from disk %c to %c",source,temp);
        return;
    }
    towerofhanoi(n-1,source,desi,temp);
    printf("\n move disk %d from disk %c to %c",n,source,temp);
    towerofhanoi(n-1,desi,temp,source);
}
