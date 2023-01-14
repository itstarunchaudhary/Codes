#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter the string\n");
    fgets(str,1000,stdin);
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    int flag=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            printf("The character %c is present at position %d\n",ch,i);
            flag++;
        }
    }
    if(flag==0){
        printf("The word you have entered is not present int the string.");
    }

}