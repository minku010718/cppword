#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	char c1 = 0;

	
	while (c1 != 'Q' && c1 != 'q')
	{
		printf("���ĺ� �Է� : ");
		scanf("%c", &c1);
		count++;
		
		if (c1 == 'Q' || c1 == 'q')
		{
			printf("���ڸ� ã�ҽ��ϴ�!\n");
			printf("�� Ƚ���� %d�� �Դϴ�.\n", count);
			break;
		}
		else
			printf("ã�� ���ĺ��� �ƴմϴ�. �ٽ� �Է��ϼ���.\n");
		
	}
	return 0;
}