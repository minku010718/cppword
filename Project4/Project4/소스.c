#include <stdio.h>
#include <stdlib.h>

#define N 4000

unsigned countItr = 0;

int IntSumIteration(int A[], int n)
{
	int sum = 0;    countItr++;
	for (int i = 0; i < n; i++)
	{
		countItr++;
		sum += A[i];    countItr++;
	}
	countItr++;
	countItr++; return sum;
}



int main()
{
	int i, A[N];
	int n = N;

	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	return 0;
}