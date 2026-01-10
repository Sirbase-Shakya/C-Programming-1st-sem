#include<stdio.h>
int main()
{
    char name[20];
    int roll;
    printf("Enter Name and Roll No.:");
    scanf("%s %d",&name,&roll);
    printf("Name = %s\nRoll No.= %d",name,roll);
}