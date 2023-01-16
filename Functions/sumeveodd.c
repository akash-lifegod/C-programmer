#include<stdio.h>
int even(int);
int odd(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    printf("Even no.s sum\n");
    even(n);
    printf("\nOdd no.s sum\n");
    odd(n);
    return 0;
}
int even(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    if(i%2==0)
        sum+=i;
    printf("%d",sum);
}
int odd(int n)
{
    int i,sum=0;
    for(i=0;i<=n;i++)
    if(i%2!=0)
        sum+=i;
    printf("%d",sum);
}