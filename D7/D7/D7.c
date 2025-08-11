#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("i[%d] j<%d> ", i, j);
		}
		printf("\n");
	}
	return 0;
}