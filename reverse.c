#include <stdio.h>
int main()
{
    int arr[6], L = 0, R = 5, temp;
    printf("Enter elements of array.");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (L < R)
    {
        temp = arr[L];
        arr[L] = arr[R];
        arr[R] = temp;
        L++;
        R--;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}