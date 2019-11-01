#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 16
int main()
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	// 사용자로부터 출석/ 결석 여부를 입력 받아서 배열에 저장한다
	for (i = 0; i < SIZE; i++)
	{
		printf("%d번째 강의에 출석을 하였는가? ");
		scanf_s("%d", &att_book[i]);
	}
	for (i = 0; i < SIZE; i++)
	{
		if (att_book[i] == 0)
		{
			count++;
		}
	}

	double ratio = count / 16.0;
	if (ratio > 0.3)
	{
		printf("수업 일수 부족입니다(%f%%)", ratio*100.0);
	}


	return 0;
}