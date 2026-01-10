#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter Length and Breadth of Rectangle:");
    scanf("%d %d",&l,&b);
    int area,peri;
    area = l*b;
    peri = 2*(l+b);
    printf("Area = %d\nPerimeter = %d ",area,peri);
}