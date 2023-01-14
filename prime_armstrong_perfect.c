#include <stdio.h>
#include <math.h>
int prime(int num)
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i != 0)
            flag++;
    }
    if (flag == (num / 2) - 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int armstrong(int num)
{
    int r, sum = 0, temp;
    temp = num;
    int a=num;
    int flag=0;
    while(a>0){
        a=a/10;
        flag++;
    }
    while (num > 0)
    {
        r = num % 10;
        sum = sum + pow(r,flag);
        num = num / 10;
    }
    if (temp == sum){
        return 0;
    }
    else{
        return 1;
    }
}
int perfect(int num)
{
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    if (prime(num) == 0)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }
    if (armstrong(num) == 0)
    {
        printf("The number is armstrong.\n");
    }
    else
    {
        printf("The number is not armstrong.\n");
    }
    if (perfect(num) == 0)
    {
        printf("The number is perfect.\n");
    }
    else
    {
        printf("The number is not perfect.\n");
    }
}