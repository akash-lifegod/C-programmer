#include<stdio.h>
int prime(int); //declaration

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    prime(n);
    return 0;
}

int prime(int n) //definiton
{
    int i,j=0;
    if(n==1||n==2)
    printf("Prime NO.");
    else if(n>2)
    {
        for(i=2;i<n;i++)
        {
            if(n%i!=0)
            j++;
        }
    }
    if(j==n-2)
    printf("Prime No.");
    else
    printf("Not Prime no.");
}