#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,s,k,l,p,f;
    scanf("%d",&n);
    k=log10(n);
    p=pow(10,k);
    l=n%10;
    f=n/p;
    n%=p;
    n/=10;
    s=l*p+n*10+f;
    printf("%d",s);
    return 0;
}
