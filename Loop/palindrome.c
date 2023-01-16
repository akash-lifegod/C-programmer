#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,s=0,k;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    printf("%d is the reversed no.",s);
    if(k==s)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
