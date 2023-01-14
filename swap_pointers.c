#include <stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The value of a and b before swap are %d %d\n",a,b);
    swap(&a,&b);
    printf("The value of a and b after swap are %d %d\n",a,b);
}