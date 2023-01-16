#include <stdio.h>

int main()
{
    int n,m;
    printf("Rows\n");
    scanf("%d",&n);
    printf("Columns\n");
    scanf("%d",&m);
   
    int a[n][m],b[n][m],i,j,k=0,p=0;
    {
        printf("M1\n");
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                printf("%d",a[i][j]);
                printf("\n");
            }
        }
        printf("M2\n");
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                scanf("%d",&b[i][j]);
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                printf("%d",b[i][j]);
                printf("\n");
            }
        }
        printf("M2==M1\n");
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i][j]==b[i][j])
                    k++;
                    else
                    p++;
                }
            }
            if(k>0)
            printf("Yes Equal");
            if(p>0)
            printf("Not Equal");
        }
    }
    return 0;
}