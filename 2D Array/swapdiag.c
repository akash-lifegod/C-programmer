#include <stdio.h>
#define N 3
#define M 3

int main()
{
    int A[N][M];
    int i,j,size, temp;
    printf("Enter elements in matrix of size %dx%d: \n", N, M);
    for(i=0; i<N; i++)
    for(j=0; j<M; j++)
    scanf("%d", &A[i][j]);

    size = (N < M) ? N : M;
    /*
     * Interchange diagonal of the matrix
     */
    for(i=0;i<size;i++)
    {
        j=i;
        temp = A[i][j];
        A[i][j] = A[i][(size-j) - 1];
        A[i][(size-j) - 1] = temp;
    }

    printf("\nMatrix after diagonals interchanged: \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        printf("%d ",A[i][j]);
        printf("\n");
    }
 
    return 0;
}