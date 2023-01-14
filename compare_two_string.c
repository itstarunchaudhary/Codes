#include <stdio.h>
#include <string.h>
int main(){
    char str1[1000];
    char str2[1000];
    fgets(str1,1000,stdin);
    fgets(str2,1000,stdin);
    int a1=strlen(str1);
    int a2=strlen(str2);
    if(a1==a2){
        int flag=0;
        for(int i=0;i<a1;i++){
            if(str1[i]==str2[i]){
                flag++;
            }
            else{
                printf("Your string are not same.");
                break;
            }
        }
        if(flag==a1){
            printf("Your strings are same.");
        }
    }
    else{
        printf("Your strings are not same.");
    }
}