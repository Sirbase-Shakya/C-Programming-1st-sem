#include <stdio.h>

int main()
{
    int arr[10], i, j, k, isDuplicate;

    printf("Enter elements in array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");

    for (i = 0; i < 10; i++)
    {
        isDuplicate = 0;

        // Check if already printed before
        for (k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate)
            continue;

        // Check if appears again later
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
