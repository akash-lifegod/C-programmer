#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,sum=0;
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
    //row sum
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
    }
    //column sum
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        sum+=a[i][j];
        printf("Sum of column %d is %d\n",j+1,sum);
    }
    return 0;
}