#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(void)
{
    clock_t start, finish;
    double duration;
    start = clock();
    
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("%f 초입니다.\n", duration);
}