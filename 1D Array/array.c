#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Input array\n");
    for (i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}