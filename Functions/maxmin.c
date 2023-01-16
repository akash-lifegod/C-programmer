#include<stdio.h>
int maxmin(int,int);

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter no.s");
    scanf("%d%d",&a,&b);
    maxmin(a,b);
    return 0;
}

int maxmin(int a, int b)
{
    (a>b)?printf("Max %d\nMin %d",a,b):printf("Max %d\nMin %d",b,a);
}
