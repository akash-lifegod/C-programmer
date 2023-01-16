#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1,f;
    scanf("%d",&n);
    while (n>=1)
    {
        f=i*n;
        i=f;
        n--;
    }
    printf("%d",f);
    
    return 0;
}
