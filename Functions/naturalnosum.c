#include<stdio.h>
int natural(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    natural(n);
    return 0;
}
int natural(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    sum+=i;
    printf("%d",sum);
}