#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5]={2,4,6,8,0};
    printf("%d\n%d\n",a,*a);
    printf("%d\n",&a[1]);
    printf("%d\n",(a+1));
    printf("%d\n",&*(a+0));
    printf("%d\n",a[1]);
    printf("%d\n",*(a+1));
    return 0;
}
