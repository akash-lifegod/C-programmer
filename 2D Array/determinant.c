#include <stdio.h>
#define n 3
int main()
{
    int A[n][n];
    int i,j;
    long det;
    printf("Enter elements in matrix of size 3x3: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    det = (A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1])) - (A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0])) + (A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]));
    printf("Determinant of matrix A = %ld", det);
    return 0;
}