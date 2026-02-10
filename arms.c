#include <stdio.h>
#include <math.h>
int main()
{
    int num, arm = 0, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        arm += round(pow(temp % 10, count));
        temp /= 10;
    }
    if (arm == num)
    {
        printf("The number is Armstrong.");
    }
    else
    {
        printf("The number is not Armstrong.");
    }
}