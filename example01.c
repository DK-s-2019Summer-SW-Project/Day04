// 성적을 저장하는 배열을 서언하고 배열 요소에 10,20,30,40,50,이라는 값을 저장해보자
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 5

int main()
{
	int i;
	int score[SIZE];// 크기가 10인 정수형 배열의 정의한다.
	score[0] = 10;// --> 각 배열의 크기를 10으로 초기화
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;
	

	for (i = 0; i < SIZE; i++)
	{
		printf("score[%d]=%d\n", i, score[i]);
	}

	return 0;
}