#include <stdio.h>
int main()
{
    int arr[10], i, check;
    printf("Enter elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be searched");
    scanf("%d", &check);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == check)
        {
            printf("The element is at index %d. ", i);
            goto end;
        }
    }
    printf("The element is not in the array.");
end:
    return 0;
}