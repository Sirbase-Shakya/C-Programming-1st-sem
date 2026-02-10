#include <stdio.h>
#include <time.h>
double time_taken(int n)
{
    int i;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    for (i = 0; i < n; i++)
    {
        int x = i * i;
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    return cpu_time_used;
}
int main()
{
    int n = 1000000000;
    double cpu_time_used = time_taken(n);
    printf("Time taken  = %f seconds", cpu_time_used);
    return 0;
}
