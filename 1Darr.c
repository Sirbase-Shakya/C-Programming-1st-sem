#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter elements of array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}