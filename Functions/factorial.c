#include <stdio.h>
int fact(int);
int fact(int n)
{
    int f=1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    return(f);
}
int main(int argc, char const *argv[])
{
    int  n,k;
    printf("Enter no.");
    scanf("%d",&n);
    k=fact(n);
    printf("Factorial of %d is %d",n,k);
    return 0;
}