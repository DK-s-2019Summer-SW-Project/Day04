#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 5
int main()
{
	int score[SIZE] = { 1, 2, 3, 1, 50};
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("score[%d] = %d\n", i, score[i]);
	}
	return 0;
}