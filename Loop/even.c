#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
    scanf("%d",&n);
    for(i;i<=n;i++)
    if(i%2==0)
    printf("%d",i);
    return 0;
}
