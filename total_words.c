#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int flag=0;
    for(int i=0;str[i];i++){
        if(str[i]==32){
            flag++;
        }
    }
    printf("%d",flag+1);
    
}