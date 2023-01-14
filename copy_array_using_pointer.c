#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *x=arr;
    int parr[n];
    for(int i=0;i<n;i++){
        parr[i]=*(x+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",parr[i]);
    }
}