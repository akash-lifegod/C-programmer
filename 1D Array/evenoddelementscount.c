#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,e=0,o=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e=e+1;
        else
        o=o+1;
    }
    printf("E%d O%d",e,o);
    return 0;
}