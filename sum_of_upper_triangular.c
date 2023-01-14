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
    int sum=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=sum+mat[i][j];

        }
    }
    printf("%d",sum);
}