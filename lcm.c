#include <stdio.h>
int lcm(int n1,int n2){
    int a=n1;
    int b=n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        n1 -= n2;
        else
        n2 -= n1;
    }
    return (a*b)/n1;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The lcm of %d and %d is %d",a,b,lcm(a,b));
}