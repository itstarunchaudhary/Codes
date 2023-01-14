#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float dia(float rad){
    return 2*rad;
}
float circum(float rad){
    return 2*3.14*rad;
}
float area(float rad){
    return 3.14*rad*rad;
}

int main(){
    float rad;
    printf("Enter the radius of your circle:\n");
    scanf("%f",&rad);
    char a[20];
    printf("What you want to find for a circle?\n");
    scanf("%s",a);
    if(strcmp(a,"diameter")==0){
        printf("Diameter of the circle is %.2f",dia(rad));
    }
        else if(strcmp(a,"circumference")==0){
        printf("Circumference of the circle is %.2f",circum(rad));
    }
        if(strcmp(a,"area")==0){
        printf("Area of the circle is %.2f",area(rad));
    }
    return 0;
}