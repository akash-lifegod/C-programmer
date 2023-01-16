#include<stdio.h>
int printprime(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no. ");
    scanf("%d",&n);
    printprime(n);
    return 0;
}

int printprime(int n)
{
    int i,j,k=0;
    for(i=1;i<=n;i++)
    {
        if(i==2)
        {
        printf("%d ",i);
        continue;
        }
        k=0;
        if(i>2)
        {
        for(j=2;j<=i;j++)
        {
        if(i%j!=0)
        k++;
        }
        if(k==i-2)
        printf("%d ",i);
        }
    }
}