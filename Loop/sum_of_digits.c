#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,f,s=0,k,p=1;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        f=n%10;
        n=n/10;
        s+=f;
    }
    printf("Sum %d\n",s);
    while(k>0)
    {
        f=k%10;
        k=k/10;
        p*=f;
    }
    printf("Product %d",p);
    return 0;
}