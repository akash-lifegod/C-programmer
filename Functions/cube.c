#include<stdio.h>

int cu(int);   //declaration

int main()
{
    int n,k;
    printf("Enter no.");
    scanf("%d",&n);
    k=cu(n);
    printf("%d",k);
    return 0;
}

int cu(int n)    //definition
{
    int c;
    c=n*n*n;
    return (c);
}