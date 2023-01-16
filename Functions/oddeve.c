#include<stdio.h>
int even(int);
int odd(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    printf("Even no.s\n");
    even(n);
    printf("\nOdd no.s\n");
    odd(n);
    return 0;
}
int even(int n)
{
    int i;
    for(i=1;i<=n;i++)
    if(i%2==0)
        printf("%d ",i);
}
int odd(int n)
{
    int i;
    for(i=0;i<=n;i++)
    if(i%2!=0)
        printf("%d ",i);
}