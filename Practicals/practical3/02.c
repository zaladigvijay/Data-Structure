#include<stdio.h>

int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n,i=0;
    printf("enter a number for series:");
    scanf("%d",&n);
    printf("\nFibonnaci Series\n");
    while(i<=n)
    {
        printf("%d ",fibonacci(i));
        i++;
    }

    return 0;
}
