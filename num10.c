#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per;
    printf("Input Marks in 5 Subjects");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    per = (float)total/5;
    printf("Total = %d\nPercentage = %.2f",total,per);
}