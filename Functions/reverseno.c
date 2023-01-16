#include<stdio.h>
#include<math.h>
int reverse(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
int reverse(int n)
{
    int s=0,l;
    while(n>0)
    {
    l=n%10;
    s=s*10+l;
    n=n/10;
    }
    printf("Reversed no. is %d",s);
}