#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,max=0,min;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(i==0)
    {
    max=a[i];
    min=a[i];
    }
    for (i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    for (i=0;i<n;i++)
    {
    if(max<a[i])
    max=a[i];
    }
    printf("Max %d\nMin %d",a[i]<max,min);
    return 0;
}