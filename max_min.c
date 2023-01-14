#include <stdio.h>

int maximum(int a,int b){
    if(a>=b){
        return a;
    }
    else if(b>a){
        return b;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max=maximum(a,b);
    int min=(a!=max)?a:b;
    printf("The maximum of the two is %d and the minimum of the two is %d\n",max,min);
}