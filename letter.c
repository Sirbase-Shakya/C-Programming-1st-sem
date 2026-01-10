#include<stdio.h>
int main()
{
    char a;
    check:
    printf("Enter an alphabet:");
    scanf(" %s",&a);
    if(a < 'a' || a > 'z')
        goto check;
    if(a == 'a' || a == 'e' ||a == 'o' || a == 'i' || a == 'u')
        printf("%c is a vowel.",a);
    else
        printf("%c is a consonant.",a);
    
}