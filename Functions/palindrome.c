#include<stdio.h>
int palindrome(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
int palindrome(int n)
{
    int s=0,l,k;
    k=n;
    while(n>0)
    {
    l=n%10;
    s=s*10+l;
    n=n/10;
    }
    if(k==s)
    printf("Palindrome no.");
    else
    printf("Not Palindrome");
}