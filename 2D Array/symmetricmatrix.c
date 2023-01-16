#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,k=0;
    printf("Rows");
    scanf("%d",&n);
    printf("Columns");
    scanf("%d",&m);
    int a[n][m],b[m][n];
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        if(a[i][j]==a[j][i])
        k++;
    }
    if(k==n*n)
    printf("Symmetric Matrix");
    else
    printf("Non Symmetric");
    return 0;
}