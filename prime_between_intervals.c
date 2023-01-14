 #include <stdio.h>
 void prime(int rmin,int rmax){
    for(int i=rmin;i<=rmax;i++){
        int flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j!=0){
                flag++;
            }
        }
        if(flag==i/2-1){
            printf("%d ",i);
        }
    }
 }
 int main(){
    int rmin,rmax;
    scanf("%d %d",&rmin,&rmax);
    prime(rmin,rmax);

 }