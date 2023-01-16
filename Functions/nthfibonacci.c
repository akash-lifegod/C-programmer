#include<stdio.h>
int fibonacci(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter which term you want to print");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
    int a=-1,b=1,m=0,c=0;
    while(m<=n)
    {
        c=a+b;
        a=b;
        b=c;
        m++;
        if(m==n)
        printf("%dth fibonacci term is %d",n,c);
    }
}