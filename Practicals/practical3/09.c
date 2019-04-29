#include<stdio.h>
#include<conio.h>
int length(char*);
int main()
{
    char a[20];
    printf("\n enter a string=");
    gets(a);
    printf("\n length of string=%d",length(a));

}
int length(char *a)
{
    int l=0;
    if(*a!='\0')
    {
        return 1+length(a+1);
    }
    else
    {
        return l;
    }
}
