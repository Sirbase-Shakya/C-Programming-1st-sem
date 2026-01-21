#include<stdio.h>
int main()
{
    int arr[5],max,i;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
            max =  arr[i];
    }
    printf("Max = %d",max);
}