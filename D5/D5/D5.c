#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 80;
	char grade;


	switch (score / 10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	printf("����� ������ %d���̰�, ����� ������ %c�Դϴ�\n", score, grade);
	return 0;
}