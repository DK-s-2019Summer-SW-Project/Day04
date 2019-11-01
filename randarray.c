// 0~9까지 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성
// 난수는 rand()를 사용하여 생성 , 배열을 사용
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 10
int main()
{
	int data[100] = { 0 };
	int i, k, max, index;
	srand(time(NULL));

	for (i < 0; i < 100; i++)
	{
		data[i] = rand() % 10;
	}
	for (i = 0; i < 100; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
			index = i;
		}
	}
}

// 난수 생성 함수가 필요
// 생성된 난수 중 가장 많이 생성된 수를 파악하고 출력하는 프로그램 작성