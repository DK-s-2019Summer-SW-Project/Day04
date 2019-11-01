#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 10
int main()
{
	int score[SIZE];
	int i, total = 0;// total = 0으로 초기화를 해야 값이 실행 된다.

	for (i = 0; i < SIZE; i++) // i값의 범위를 내 맘대로 설정하면 안된다. 즉 i의 범위는 무조건 내가 선언한 배열 아래이다.
	{
		printf("insert a number: ");
		scanf_s("%d", &score[i]);
		total += score[i];
	}
	/*for (i = 0; i < SIZE; i++)
	{
		total += score[i];
	}*/
	// 참고로 배열은 입력 받는 것 for 선언 그리고 계산을 위한 for 선언 이렇게 2개씩 선언을 하는 것 같다. --> 그럴 필요 없다.
	printf("%d", total);
	return 0;
}