#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j,sum=0;
    printf("Rows and columns of square matrix");
    scanf("%d",&n);
    int a[n][n];
    printf("M1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    {
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
