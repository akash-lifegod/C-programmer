#include<stdio.h>
int lcm(int,int);
int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter two no.s to find lcm\n");
    scanf("%d%d",&n,&m);
    lcm(n,m);
    return 0;
}
int lcm(int n ,int m)
{
    int i,max,lcm;
    for(i=1;i<=n*m;i++)
    {
        if(i%n==0&&i%m==0)
        {
        lcm=i;
        break;
        }
    }
    printf("LCM of %d and %d is %d",n,m,lcm);
}