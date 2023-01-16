#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n],ele,pos;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Input array\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\nEnter element you want to insert\n");
    scanf("%d",&ele);
    printf("Enter position at which you want to insert\n");
    scanf("%d",&pos);
    n=n+1;
    for(i=n-1;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=ele;
    printf("New array\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
