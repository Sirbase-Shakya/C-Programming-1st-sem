#include <stdio.h>
int main()
{
    int nums[] = {0, 1, 0, 0, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]), index = 0, check = 0;
    while (index < n)
    {
        if (nums[index] == 0)
        {
            index++;
            continue;
        }
        int temp = nums[index];
        nums[index] = nums[check];
        nums[check] = temp;
        index++;
        check++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}