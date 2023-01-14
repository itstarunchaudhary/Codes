#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr1[r][c];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("Enter the element belong to %d row and %d column\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int j = 1; j <= c; j++)
    {
        int sum = 0;
        for (int k = 1; k <= c; k++)
        {
            sum = sum + arr1[j][k];
        }
        printf("The sum of %d row is    :%d\n", j, sum);
        sum = 0;
        for (int l = 1; l <= r; l++)
        {
            sum = sum + arr1[l][j];
        }
        printf("The sum of %d column is :%d\n",j,sum );
    }
}