#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode {
	int number; //���ڸ� ������ ����
	struct LinkNode* next; // ���� ��带 ����ų ������
}NODE;

int main()
{
	NODE* newNode = NULL;
	NODE* head = NULL;
	NODE* tail = NULL;
	int num = 0;
	//����ڷκ��� ���ڸ� ��� �Է¹޵���. ��, -1�� �ԷµǸ� ���α׷��� ����
	while (1)
	{
		newNode = (NODE*)malloc(sizeof(NODE)); //�����Ҵ�. ���ο� ��� ����!
		printf("���� �Է� : ");
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

			if (head == NULL) //ù ��尡 ���ٸ�
				tail = head = newNode; //�� ��尡 ù ������� �� ���
			else
			{
				tail->next = newNode;
				tail = newNode;
			}
		}
	}
	NODE* curr = head;
	if (head == NULL)
		printf("�Է� �����Ͱ� ����\n");
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
