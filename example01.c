// ������ �����ϴ� �迭�� �����ϰ� �迭 ��ҿ� 10,20,30,40,50,�̶�� ���� �����غ���
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 5

int main()
{
	int i;
	int score[SIZE];// ũ�Ⱑ 10�� ������ �迭�� �����Ѵ�.
	score[0] = 10;// --> �� �迭�� ũ�⸦ 10���� �ʱ�ȭ
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