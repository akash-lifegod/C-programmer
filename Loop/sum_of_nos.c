#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        //if(i%2==0)
        s+=i;
    }
    printf("%d",s);
    return 0;
}
