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

				printf("컴퓨터가 고른 숫자 : %d\n", com[i]);
				sum = sum + com[i];
				if (sum >= 100) {
					printf("\n현재 합계 : %d! 컴퓨터 승!\n", sum);
					printf("-----------------------------------\n\n");
					break;
				}
				else {
					printf("플레이어의 숫자를 입력해주세요(1~10,중복X) : ");
					scanf("%d", &player[i]);

					sum = sum + player[i];
					if (sum >= 100) {
						printf("\n현재 합계 : %d! 플레이어 승!\n\n", sum);
						printf("-----------------------------------\n\n");
						break;
					}


					printf("\n현재 합계 : %d\n\n", sum);
					printf("-----------------------------------\n");
				}

				if (sum >= 100)
					break;
				else
					continue;
			}
		}
		else {
			printf("\n<<<<게임종료>>>>\n\n");
			break;
		}
	} while (sum >= 100);

}