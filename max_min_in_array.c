#include <stdio.h>
int max(int n,int arr[]){
    int max=arr[1];
    for(int i=2;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int n,int arr[]){
    int min=arr[1];
    for(int i=2;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum element in the array is %d and the minimum element in the array is %d.",max(n,arr),min(n,arr));
}