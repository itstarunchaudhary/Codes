#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            if(arr[j]<arr[j+1]){
                continue;
            }
            else{
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }


    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }





}
