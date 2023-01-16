#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,max,lcm;
    printf("Enter two no.s");
    scanf("%d",&n);
    scanf("%d",&m);
    if(n<m)
    max=n;
    else if(m<n)
    max=m;
    while(max!=0)
    {
        if(max%n==0 && max%m==0)
        {
        lcm=max;
        printf("%d",lcm);
        break;
        }
        max++;
    }
        return 0;
}
