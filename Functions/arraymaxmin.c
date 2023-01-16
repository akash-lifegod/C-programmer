#include<stdio.h>
int arraymaxmin(void);
int main(int argc, char const *argv[])
{
    arraymaxmin();
    return 0;
}
int arraymaxmin()
{
    int i,n,max,min;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
    if(max<a[i])
    max=a[i];
    if(min>a[i])
    min=a[i];
    }
    printf("Max is %d\nMin is %d",max,min);
}