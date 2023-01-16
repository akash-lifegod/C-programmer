#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,k=0,p,i,j,sum=0;
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
    p=m*n/2;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        if(a[i][j]==0)
        k++;
    }
    if(k>p)
    printf("Sparse Matrix");
    else
    printf("Dense Matrix");
    
    return 0;
}