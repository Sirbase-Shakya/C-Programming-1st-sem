#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = sizeof(arr) / sizeof(arr[0]);
    int mid, L = 0, R = n - 1, search = 10, count = 0;
    while (L <= R)
    {
        mid = (L + R) / 2;
        if (arr[mid] == search)
        {
            printf("Found on index = %d\n", mid);
            break;
        }
        else if (arr[mid] > search)
        {
            R = mid - 1;
        }
        else
        {
            L = mid + 1;
        }
        count++;
    }
    printf("The Loop ran %d times.\n", count);
}