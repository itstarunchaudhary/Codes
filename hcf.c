#include <stdio.h>
int hcf(int n1,int n2){
    while (n1 != n2)
    {
        if (n1 > n2)
        n1 -= n2;
        else
        n2 -= n1;
    }
    return n1;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The hcf of %d and %d is %d",a,b,hcf(a,b));
}