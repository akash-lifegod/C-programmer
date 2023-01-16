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
    printf("\nEnter element you want to delete\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos=i+1;
            break;
        }
    }
    n=n-1;
    for(i=pos-1;i<n;i++)
    a[i]=a[i+1];
    printf("Output array\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
