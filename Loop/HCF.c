#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,min,hcf;
    printf("Enter two no.s");
    scanf("%d",&n);
    scanf("%d",&m);
    if(n<m)
    min=n;
    else if(m<n)
    min=m;
    for(i=1;i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        hcf=i;
    }
    printf("%d",hcf);

    return 0;
}