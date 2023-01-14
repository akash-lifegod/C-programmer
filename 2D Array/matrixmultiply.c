#include<stdio.h>
int main(int argc, char const *argv[])
{

    int n,m,i,j,k,p,q,sum=0;
    printf("Rows1");
    scanf("%d",&n);
    printf("Columns1");
    scanf("%d",&m);
    int a[n][m];
    printf("M1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Rows2");
    scanf("%d",&p);
    printf("Columns2");
    scanf("%d",&q);
    int b[p][q];
    printf("M2\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][q];
    if(m==p)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                {
                    for(k=0;k<m;k++)
                    sum+=a[i][k]*b[k][j];
                    c[i][j]=sum;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<q;j++)
    printf("%d ",c[i][j]);
    printf("\n");
    }
    return 0;
}