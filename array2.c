#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define STUDENTS 10
int main()
{
	int score[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("Insert a students grade: ");
		scanf_s("%d", &score[i]);
	}
		for (i = 0; i < STUDENTS; i++)
		{
			sum += score[i];
	}
		average = sum / STUDENTS;
		printf("average of the grade = %d\n", average);
	return 0;
}