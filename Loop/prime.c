#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=2;
    scanf("%d",&n);
    if(n==1)
    printf("Neither prime nor composite");
    if(n==2)
    printf("Prime");
    else if(n>2)
    {
    while(i<n)
    {
        if(n%i!=0)
        {
            if(i==n-1)
            {
            printf("prime");
            break;
            }
        }
        else if(n%i==0)
        {
            if(i=n-1)
            printf("Not Prime");
        }
        i++;
    }
    }

    return 0;
}