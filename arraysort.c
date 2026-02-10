#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 1, 3, 5}, i, n = sizeof(arr) / sizeof(arr[0]), temp, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Ascending = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nDescending = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}