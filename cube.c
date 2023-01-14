#include <stdio.h>
int cube(int num){
    return num*num*num;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("The cube of number is %d",cube(num));
}