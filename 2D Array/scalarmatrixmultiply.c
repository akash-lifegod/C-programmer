#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,multi,k;
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
    printf("Enter no. to multiply\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        multi=k*a[i][j];
        printf("%d",multi);
        }
        printf("\n");
    }

    return 0;
}
