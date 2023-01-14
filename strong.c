#include <stdio.h>
int fac(int num){
    if(num==1||num==0){
        return 1;
    }
    else{
        return(num*fac(num-1));
    }
}
int strong(int num){
    int sum=0;
    while(num>0){
        int a=num%10;
        sum=sum+fac(a);
        num=num/10;
    }
    return sum;
}

int main(){
    int rmin,rmax;
    scanf("%d %d",&rmin,&rmax);
    for(int i=rmin;i<=rmax;i++){
        if(i==strong(i)){
            printf("%d ",i);
        }
    }
}
