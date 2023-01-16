#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m=0,i,j,sum=0;
    printf("Rows");
    scanf("%d",&n);
    printf("Columns");
    scanf("%d",&m);
    int a[n][m];
    printf("M1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    printf("%d",a[j][i]);
    printf("\n");
    }
    
    return 0;
}