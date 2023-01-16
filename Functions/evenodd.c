#include<stdio.h>

int oddeve(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    oddeve(n);
    return 0;
}

int oddeve(int n)
{
    (n%2==0)?printf("Even"):printf("Odd");
}