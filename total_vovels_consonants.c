#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    fgets(str, 1000, stdin);
    int vov = 0, cons = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != 32&&str[i])
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vov++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf("The number of vovels in the string are %d and the number of consonant in string are %d", vov, cons);
}