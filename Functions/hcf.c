#include<stdio.h>
int hcf(int, int);
int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter two no.s to find hcf\n");
    scanf("%d%d",&n,&m);
    hcf(n,m);
    return 0;
}
int hcf(int n, int m)
{
    int i,min,hcf;
    if(n<m)
    min=n;
    else
    min=m;
    for(i=1;i<=min;i++)
    {
        if(n%i==0&&m%i==0)
        hcf=i;
    }
    printf("HCF of %d and %d is %d",m,n,hcf);
}