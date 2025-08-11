#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode {
	int number; //숫자를 저장할 변수
	struct LinkNode* next; // 다음 노드를 가리킬 포인터
}NODE;

int main()
{
	NODE* newNode = NULL;
	NODE* head = NULL;
	NODE* tail = NULL;
	int num = 0;
	//사용자로부터 숫자를 계속 입력받도록. 단, -1이 입력되면 프로그램이 종료
	while (1)
	{
		newNode = (NODE*)malloc(sizeof(NODE)); //동적할당. 새로운 노드 생성!
		printf("숫자 입력 : ");
		scanf("%d", &num);
		if (num == -1)
		{
			free(newNode);
			break;
		}
		if (num != -1)
		{
			newNode->number = num;
			newNode->next = NULL;

			if (head == NULL) //첫 노드가 없다면
				tail = head = newNode; //새 노드가 첫 노드이자 끝 노드
			else
			{
				tail->next = newNode;
				tail = newNode;
			}
		}
	}
	NODE* curr = head;
	if (head == NULL)
		printf("입력 데이터가 없다\n");
	else
	{
		while (curr != NULL)
		{
			printf("%d\t", curr->number);
			curr = curr->next;
		}
	}
	return 0;
}
