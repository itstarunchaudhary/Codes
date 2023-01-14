#include <stdio.h>
int even_or_odd(int num)
{
    if (num % 2 == 0 || num == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    if (even_or_odd(num) == 0)
    {
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
}