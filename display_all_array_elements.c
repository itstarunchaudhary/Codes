#include <stdio.h>
void print(int arr[], int n){
    for(int i=1;i<=n;i++){
        printf("The %d element of array is %d\n",i,arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        printf("Enter the value of %dth element of array\n",i);
        scanf("%d",&arr[i]);
    }
    print(arr,n);
}