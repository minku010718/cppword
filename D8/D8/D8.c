#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	char c1 = 0;

	
	while (c1 != 'Q' && c1 != 'q')
	{
		printf("알파벳 입력 : ");
		scanf("%c", &c1);
		count++;
		
		if (c1 == 'Q' || c1 == 'q')
		{
			printf("문자를 찾았습니다!\n");
			printf("총 횟수는 %d번 입니다.\n", count);
			break;
		}
		else
			printf("찾는 알파벳이 아닙니다. 다시 입력하세요.\n");
		
	}
	return 0;
}