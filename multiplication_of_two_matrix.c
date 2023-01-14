#include <stdio.h>
int main(){
    int r1,r2,c1,c2;
    scanf("%d %d %d %d",&r1,&r2,&c1,&c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    if(c1==r2){
        printf("Enter the elements of the first matrix:\n");
        for (int i = 1; i <= r1; i++)
        {
            for (int j = 1; j <= c1; j++)
            {
                printf("Enter the element belong to %d row and %d column\n", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for (int i = 1; i <= r2; i++)
        {
            for (int j = 1; j <= c2; j++)
            {
                printf("Enter the element belong to %d row and %d column\n", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }

        int arr[r1][c2];

        for(int i=1;i<=r1;i++){
            for(int j=1;j<=c1;j++){
                int sum=0;
                for(int k=1;k<=c2;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                arr[i][j]=sum;
            }
        }

        for (int i = 1; i <= r1; i++)
        {
            for (int j = 1; j <= c1; j++)
            {
                printf("Element at %d row and %d column is %d\n", i, j, arr[i][j]);
            }
        }




    }
    else{
        printf("Your matrices are not multiplicable.Dattabayo!");
    }
}