#include <stdio.h>
int main()
{
    int i, arr[10], sum = 0;
    float avg;
    printf("Enter elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / i;
    printf("Sum = %d \nAverage = %f", sum, avg);
}