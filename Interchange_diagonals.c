#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("Enter the value of %d row and %d column of matrix:\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    int start = 1, end = c;
    for (int i = 1; i <= r; i++)
    {

        int temp;
        temp = arr[i][end];
        arr[i][end] = arr[i][start];
        arr[i][start] = temp;
        start++;
        end--;
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("The %d row and %d column of the new matrix is %d\n",i,j, arr[i][j]);
        }
    }
    
}