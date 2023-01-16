#include<stdio.h>
int sumdigit(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    sumdigit(n);
    return 0;
}
int sumdigit(int n)
{
    int i,sum=0,l;
    while(n>0)
    {
    l=n%10;
    sum+=l;
    n/=10;
    }
    printf("Sum of digits is %d",sum);
}