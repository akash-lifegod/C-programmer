#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,m=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("*%d",a[i]);
            m++;
        }
    }
    if(m==0)
    printf("No negative elements");
    return 0;
}
