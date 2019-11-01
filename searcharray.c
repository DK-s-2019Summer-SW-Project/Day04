#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 9
int main()
{
	int i, j;
	int number[SIZE] = { 1,  2,  3,  4,  5,  6,  7,  8,  9 };

	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d", number[i]);
	}
	printf("]\n");

	printf("insert the number to search: ");
	scanf_s("%d", &j);

	for (i = 0; i < SIZE; i++)
	{
		if (number[i] == j)
		{
			printf("The search is succeses =%d\n", i);
			break;
		}
	}

	return 0;
}