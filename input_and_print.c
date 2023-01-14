#include <stdio.h>
int main(){
    int a=5;
    int* x;
    x=&a;
    scanf("%d",x);
    printf("%d",*x);

}