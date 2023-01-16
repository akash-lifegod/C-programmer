#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,k,i=0;
    printf("Enter no.");
    scanf("%d",&n);
    /*k=log10(n);
    printf("No. of digits is %d",k+1);*/
    while(n>0)
    {
        n/=10;
        i+=1;
    }
    printf("No. of digits = %d",i);
    return 0;
}
