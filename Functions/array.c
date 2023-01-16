#include<stdio.h>
int array(void);
int main(int argc, char const *argv[])
{
    array();
    return 0;
}
int array()
{
    int i,n;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array elements are\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
