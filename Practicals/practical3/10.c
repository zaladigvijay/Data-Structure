#include<stdio.h>
#include<conio.h>
int array(int a[],int st,int n);
int main()
{
    int n,a[10],i;
    printf("\n enter size of array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n array elements");
     array(a, 0, n);
    // printf()

}
int array(int a[],int st,int n)
{
    if(st >= n)
        return;

    //Prints the current array element
    printf("%d  ", a[st]);


    array(a, st+1, n);
}


