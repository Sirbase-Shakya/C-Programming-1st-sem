#include <stdio.h>
#define ROW 2
#define COL 2
int main()
{
    int arr1[ROW][COL], arr2[ROW][COL], mult[ROW][COL];
    printf("Enter elements of 1st matrix:");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < COL; k++)
                mult[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
    printf("The product of matrix is:\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}