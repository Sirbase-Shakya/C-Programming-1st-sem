#include<stdio.h>
int main()
{
    int n,res;
    printf("Enter a Number:");
    res = scanf("%d",&n);
    if(res==1)
        printf("Input Successful");
    else    
        printf("Invalid Input");
}