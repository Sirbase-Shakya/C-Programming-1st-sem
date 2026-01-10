#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i;
    float r,terms;
    printf("Enter the starting number and common ratio.");
    scanf("%d %f",&a,&r);
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        terms = a*pow(r,i-1);
        printf("%.5f ",terms);
    }
}