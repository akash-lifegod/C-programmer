#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,i,j;
    printf("Enter no. of rows and columns resp.\n");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("Input Array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d",arr[i][j]);
        printf("\n");
    }
    return 0;
}
