#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 16
int main()
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	// ����ڷκ��� �⼮/ �Ἦ ���θ� �Է� �޾Ƽ� �迭�� �����Ѵ�
	for (i = 0; i < SIZE; i++)
	{
		printf("%d��° ���ǿ� �⼮�� �Ͽ��°�? ");
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
		printf("���� �ϼ� �����Դϴ�(%f%%)", ratio*100.0);
	}


	return 0;
}