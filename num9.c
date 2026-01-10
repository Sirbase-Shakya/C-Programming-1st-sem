#include<stdio.h>
int main()
{
    
    float f,c;
    printf("Enter a temperature:");
    scanf("%f",&c);
    f= ((float)c*1.8)+32;
    printf("%.2f",f);
}