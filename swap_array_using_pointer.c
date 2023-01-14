#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the first array\n",i);
        scanf("%d",&arr1[i]);
        printf("Enter the %d element of the second array\n",i);
        scanf("%d",&arr2[i]);
    }
    int* p1;
    p1=arr1;
    int *p2;
    p2=arr2;
    for(int i=0;i<n;i++){
        int temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
    }
    for(int i=0;i<n;i++){
        printf("The %d element of the first array\n",i);
        printf("%d\n",arr1[i]);
        printf("The %d element of the second array\n",i);
        printf("%d\n",arr2[i]);
    }

}