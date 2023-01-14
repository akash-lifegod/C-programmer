#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,s=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}
