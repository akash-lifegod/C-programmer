#include<stdio.h>
#include<math.h>
int power(int,int);
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter Base number");
    scanf("%d",&a);
    printf("Enter Power number");
    scanf("%d",&b);
    power(a,b);
    return 0;
}

int power(int a, int b)
{
    int i,pow=1;
    for(i=1;i<=b;i++)
    {
        pow*=a;
    }
    printf("%d",pow);
}