#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=-1,b=1,c,m=1,n;
    printf("Enter no. is ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    while(m<=n)
    {
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
        m++;
    }
    return 0;
}
