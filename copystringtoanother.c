#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    char str2[1000];
    for(int i=0;str[i];i++){
        str2[i]=str[i];
    }
    printf("%s",str2);
}