#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int a1=strlen(str);
    for(int i=0;i<a1;i++){
        if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
        else if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    printf("The string in toggled case is \n%s",str);
}