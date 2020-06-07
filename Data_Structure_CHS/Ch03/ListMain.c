#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	int data;
	int sumdata = 0;
	ListInit(&list);

	/*** 1 ~ 9까지의 정수 저장 ***/
	for(int i = 1; i < 10; i++){
		LInsert(&list, i);
	}

	/*** 저장된 데이터의 전체 합 출력 ***/
	printf("전체 데이터의 개수: %d \n", LCount(&list));

	LFirst(&list, &data);
	for(int i = 0; i < 9; i++){
		sumdata += data;
		printf("%d ", data);
		LNext(&list, &data);
	}
	printf("\n전체 데이터의 합: %d\n", sumdata);
	printf("\n\n");

	/*** 2, 3의 배수 삭제 ***/
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

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}