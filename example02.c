#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
int main(void) {

	int com[10] = {0};
	int player[10] = {0};
	int i, j;
	int sum = 0;
	srand(time(NULL));

	com[0] = rand() % 10 + 1;
	for (i = 1; i < 10; i++) {
		com[i] = rand() % 10 + 1;
		for (j = i - 1; j >= 0; j--) {
			if (com[j] == com[i]) {

				com[i] = rand() % 10 + 1;

				continue;
			}
			else
				break;

		}
	}


	do {
		if (sum < 100) {
			for (i = 0; i < 10; i++) {

				printf("��ǻ�Ͱ� �� ���� : %d\n", com[i]);
				sum = sum + com[i];
				if (sum >= 100) {
					printf("\n���� �հ� : %d! ��ǻ�� ��!\n", sum);
					printf("-----------------------------------\n\n");
					break;
				}
				else {
					printf("�÷��̾��� ���ڸ� �Է����ּ���(1~10,�ߺ�X) : ");
					scanf("%d", &player[i]);

					sum = sum + player[i];
					if (sum >= 100) {
						printf("\n���� �հ� : %d! �÷��̾� ��!\n\n", sum);
						printf("-----------------------------------\n\n");
						break;
					}


					printf("\n���� �հ� : %d\n\n", sum);
					printf("-----------------------------------\n");
				}

				if (sum >= 100)
					break;
				else
					continue;
			}
		}
		else {
			printf("\n<<<<��������>>>>\n\n");
			break;
		}
	} while (sum >= 100);

}