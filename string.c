#include <stdio.h>
int main()
{
    char str[20], ch = 'y';
    int i = 0;
    printf("Enter Your Name");
    while (ch != '\n')
    {
        ch = getchar();
        str[i] = ch;
        i++;
    }
    printf("Your name is %s", str);
}