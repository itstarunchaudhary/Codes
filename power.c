#include <stdio.h>
int power(int num,int power1){
    int a=num;
    for(int i=1;i<power1;i++){
        a=a*num;
    }
    return a;
}
int main(){
    int num,power1;
    scanf("%d %d",&num,&power1);
    printf("%d power %d is %d",num,power1,power(num,power1));
}