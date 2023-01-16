#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,s=0,k;
    printf("Enter no.");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    printf("%d is the reversed no.",s);
}
