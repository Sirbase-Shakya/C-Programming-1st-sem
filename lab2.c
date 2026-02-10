#include <stdio.h>
#include <math.h>
int fibo(int n)
{
    int a = 0, b = 1, c;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    while (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int Q, num, count = 0, temp, arm = 0, check = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        count++;
    }
    temp = num;
    do
    {
        arm += round(pow(temp % 10, count));
        temp /= 10;
    } while (temp > 0);
    if (arm == num)
    {
        Q = count;
    }
    else
    {
        while (num > 0)
        {
            Q += num % 10;
            num /= 10;
        }
    }
    // Q check for prime
    int i = 2;
    temp = Q;
check:
    if (i <= temp)
    {
        if (Q % i == 0)
        {
            count++;
            i++;
            goto check;
        }
        else
        {
            i++;
            goto check;
        }
    }
    if (Q == 1 || Q == 0)
    {
        printf("%d", fibo(Q));
    }
    else if (count == 1)
    {
        printf("%d", fibo(Q + 1));
    }
    else
    {
        printf("%d", fibo(Q - 1));
    }
}