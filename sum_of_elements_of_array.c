#include <stdio.h>
int sum(int n,int arr[]){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of all elements of the array is %d",sum(n,arr));
}