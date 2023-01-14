#include <stdio.h>
long long int fib(int n){
    long long int a=0;
    long long int b=1;
    for(int i=1;i<=n-2;i++){
        b=a+b;
        a=b-a;
    }
    return b;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The %dth fibonacci term is %lld",n,fib(n));
}