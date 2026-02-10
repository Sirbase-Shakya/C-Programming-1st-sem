#include <stdio.h>
int main()
{
    int arr[10], i, j, count, visited[10];
    printf("Enter elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        count = 1;
        if (visited[i] == 1)
        {
            continue;
        }

        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}