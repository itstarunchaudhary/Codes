#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                flag++;
            }
        }
    }
    if(flag>=r*c/2){
        printf("It's an sparse matrix.");
    }
    else{
        printf("It's not a sparse matrix.");
    }
}