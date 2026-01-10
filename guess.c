#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int x = rand()%100 ,guess;
    check:
    printf("Enter a guess");
    scanf("%d",&guess);
    if(guess < x)
    {
        printf("The guess is too low.Try again.\n");
        goto check;
    }
    else if(guess > x)
    {
        printf("The guess is too high. Try again.\n");
        goto check;
    }
    else
        printf("The Guess is correct. The number was %d",x);
}