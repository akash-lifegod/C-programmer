#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],b[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
        printf("%d",b[i]);
    }
    return 0;
}
