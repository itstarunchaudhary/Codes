#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int flaga=0,flagn=0,flags=0;
    for(int i=0;str[i];i++){
        if((str[i]>=97&&str[i]<=122)||(str[i]>=65&&str[i]<=90)){
            flaga++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            flagn++;
        }
        else{
            flags++;
        }
    }
    printf("The total number of alphabets , numbers , symbols are %d %d %d",flaga,flagn,flags);
}