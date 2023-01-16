#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,temp=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nInput array\n");
    for (i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]) 
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted array\n");
    for (i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
