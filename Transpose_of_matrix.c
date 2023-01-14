#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    int mat[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i != j)
            {
                int temp = mat[j][i];
                mat[j][i] = mat[i][j];
                mat[i][j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The %d row and %d column of the new matrix is %d\n", i, j, mat[i][j]);
        }
    }
}