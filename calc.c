#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("********Calculator*********\n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter Choice:");
    scanf("%d",&choice);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
        case 1:
            printf("The sum is %d",a+b);
        break;
        case 2:
            printf("The difference is %d",a-b);
        break;
        case 3:
            printf("The product is %d",a*b);
        break;
        case 4:
            printf("The quotient is %f",(float)a/b);
        break;
        default:
            printf("Invalid Choice");
    }
}