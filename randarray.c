// 0~9���� ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷��� �ۼ�
// ������ rand()�� ����Ͽ� ���� , �迭�� ���
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

// ���� ���� �Լ��� �ʿ�
// ������ ���� �� ���� ���� ������ ���� �ľ��ϰ� ����ϴ� ���α׷� �ۼ�