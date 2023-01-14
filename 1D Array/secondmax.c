#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,max=0,pos;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    if(max<a[i])
    {
    max=a[i];
    pos=i;
    }
    a[pos]=0;
    max=a[0];
    for(i=0;i<n;i++)
    if(max<a[i])
    {
    max=a[i];
    }
    printf("Second max is %d",max);

    return 0;
}
