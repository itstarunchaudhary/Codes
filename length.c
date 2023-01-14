#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=0;
    for(len=0;str[len];len++){
    }
    printf("The length of the string is %d",len);
}