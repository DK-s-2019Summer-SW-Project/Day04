#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 10
int main()
{
	int score[SIZE];
	int i, total = 0;// total = 0���� �ʱ�ȭ�� �ؾ� ���� ���� �ȴ�.

	for (i = 0; i < SIZE; i++) // i���� ������ �� ����� �����ϸ� �ȵȴ�. �� i�� ������ ������ ���� ������ �迭 �Ʒ��̴�.
	{
		printf("insert a number: ");
		scanf_s("%d", &score[i]);
		total += score[i];
	}
	/*for (i = 0; i < SIZE; i++)
	{
		total += score[i];
	}*/
	// ����� �迭�� �Է� �޴� �� for ���� �׸��� ����� ���� for ���� �̷��� 2���� ������ �ϴ� �� ����. --> �׷� �ʿ� ����.
	printf("%d", total);
	return 0;
}