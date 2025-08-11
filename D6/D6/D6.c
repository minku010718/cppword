#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	while (num < 30)
	{
		num++;
		printf("%3d", num);

		if ((num % 5) == 0)
			printf("\n");
	}
	return 0;
}