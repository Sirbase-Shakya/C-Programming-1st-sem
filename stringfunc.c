#include <stdio.h>
#include <string.h>
void main()
{
    char str[20] = "Saurav", temp[] = "Gautam";
    int i = strlen(str), j = 0;
    while (temp[j] != '\0')
    {
        str[i] = temp[j];
        i++;
        j++;
    }

    printf("%s", str);
}