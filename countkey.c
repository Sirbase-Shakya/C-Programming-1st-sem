#include <stdio.h>
#include<ctype.h>

int main() {
    char a[]="ffxkVZQtqMnMcLR";
    int c=0,i;
    for(i=0;a[i]!='\0';i++){
    tolower(a[i]);}
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[i-1])
        {
            c++;
        }
    }
    printf("%d",c-1);
    

    return 0;
}