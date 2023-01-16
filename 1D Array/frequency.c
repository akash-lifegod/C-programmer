#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,max;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Input array\n");
    for (i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    int b[max+1];
    for(i=0;i<max+1;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    b[a[i]]++;
    for(i=0;i<max+1;i++)
    {
        if(b[i]>0)
        printf("%d=%d\n",i,b[i]);
    }
    return 0;
}
