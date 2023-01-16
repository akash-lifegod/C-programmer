#include<stdio.h>
int arraysum(void);
int main(int argc, char const *argv[])
{
    arraysum();
    return 0;
}
int arraysum()
{
    int i,n,sum=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("Array elements sum is %d",sum);
    
}
