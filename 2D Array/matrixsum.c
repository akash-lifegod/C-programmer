#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,sum;
    printf("Rows");
    scanf("%d",&n);
    printf("Columns");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("M1");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("M2");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        sum=a[i][j]+b[i][j];
        printf("%d",sum);
        }
        printf("\n");
    }
    return 0;
}
