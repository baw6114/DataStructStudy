#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	int data;
	int sumdata = 0;
	ListInit(&list);

	/*** 1 ~ 9������ ���� ���� ***/
	for(int i = 1; i < 10; i++){
		LInsert(&list, i);
	}

	/*** ����� �������� ��ü �� ��� ***/
	printf("��ü �������� ����: %d \n", LCount(&list));

	LFirst(&list, &data);
	for(int i = 0; i < 9; i++){
		sumdata += data;
		printf("%d ", data);
		LNext(&list, &data);
	}
	printf("\n��ü �������� ��: %d\n", sumdata);
	printf("\n\n");

	/*** 2, 3�� ��� ���� ***/
	if(LFirst(&list, &data))
	{
		if(data%2 == 0 || data%3 == 0)
		{
			LRemove(&list);
		}
		
		while(LNext(&list, &data))
		{
			if(data%2 == 0 || data%3 == 0)
			{
				LRemove(&list);
			}
		}
	}

	/*** ���� �� ����� ������ ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}