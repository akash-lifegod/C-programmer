#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,m,j;
    printf("Enter no. of elements  of array 1");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter no. of elements  of array 2");
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("Input array 1\n");
    for (i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\nInput array 2\n");
    for (i=0;i<m;i++)
    printf("%d",b[i]);
    printf("\n");
    int c[m+n],k=0;
    for(i=0;i<n;i++)
    {
    c[k]=a[i];
    k++;
    }
    for(i=0;i<m;i++)
    {
    c[k]=b[i];
    k++;
    }
    printf("New Array");
    for(i=0;i<m+n;i++)
    printf("%d",c[i]);
    return 0;
}
