#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    printf("The string before reversed \n%s",str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        int temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;
    }
    printf("The string after reversed \n%s",str);
}