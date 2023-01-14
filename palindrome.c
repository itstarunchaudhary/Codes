#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int a=strlen(str);
    int flag=0;
    for(int i=0;i<a/2;i++){
        if(str[i]==str[a-i-2]){
            flag++;
        }
    }
    if(flag==a/2){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}