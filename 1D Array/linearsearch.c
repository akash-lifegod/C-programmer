#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n],ele,i,k,f=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter search element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            f=1;
            k=i+1;
        }
    }
    if(f==1)
    printf("Element found at location %d",k);
    else
    printf("Element not found");
    return 0;
}