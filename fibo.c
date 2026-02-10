#include <stdio.h>
// int fibo(int num)
// {
//     if (num == 0)
//         return 0;
//     if (num == 1)
//         return 1;
//     return fibo(num - 1) + fibo(num - 2);
// }
int main()
{
    int num = 16, a = 0, b = 1, i = 3, c;
    printf("%d %d ", a, b);
    while (i <= num)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    }
}