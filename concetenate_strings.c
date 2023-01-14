#include <stdio.h>
#include <string.h>
int main(){
    char str1[1000];
    printf("Enter the first string\n");
    fgets(str1,1000,stdin);
    char str2[1000];
    printf("Enter the second string\n");
    fgets(str2,1000,stdin);
    int a1=strlen(str1);
    int a2=strlen(str2);
    char str3[a1+a2+1];
    for(int i=0;i<a1+a2+1;i++){
        if(i<a1){
            str3[i]=str1[i];
        }
        else{
            str3[i]=str2[i-a1];
        }
    }
    printf("The resultant string is: \n%s",str3);
}