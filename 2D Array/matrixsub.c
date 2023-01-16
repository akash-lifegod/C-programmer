#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,diff;
    printf("Rows");
    scanf("%d",&n);
    printf("Columns");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("M1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("M2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("M2-M1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        diff=b[i][j]-a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d",diff);
        printf("\n");
    }
    return 0;
}
