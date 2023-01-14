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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] == mat[j][i])
            {
                if (i != j)
                {
                    flag++;
                }
            }
        }
    }

    if (flag == n*n-n)
    {
        printf("Your matrix is an symmetric matrix.");
    }
    else
    {
        printf("Your matrix is not an symmetric matrix.");
    }
}
