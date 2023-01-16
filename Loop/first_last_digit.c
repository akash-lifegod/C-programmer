#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,f,l;
    scanf("%d",&n);
    l=n%10;
    while(n>0)
    {
        f=n;
        n/=10;
    }
    printf("F%d L%d Sum=%d",f,l,f+l);
    return 0;
}
