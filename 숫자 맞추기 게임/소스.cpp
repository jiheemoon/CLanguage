#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num, key, min = 1, max = 100, right = 0;
	char c = 'Y';

	srand((unsigned int)time(NULL));
	num = rand() % 100 + 1;

	while (c != 'N')
	{
		for (i = 1; i <= 10 && right != 1; i++)
		{
			printf("숫자맞추기게임! 1 ~ 100 중아무숫자를입력하세요!");
			scanf("%d", &key);
			flushall();

			if (num>key)
			{
				min = key + 1;
				printf("\t 더 큰 수를 선택하세요.\n)";
			}
			else if (num < key)
			{
				max = key - 1;

				printf("더 작은 수를 넣으시오.\n");
			}
			else
			{
				printf("\t\n 정답입니다.!!!\n");
				printf(" 당신이 맞춘 수는 %d입니다.\n", key);
				right = 1;
			}
		}

		printf(" 게임을 계속하시겠습니까?\n");
		printf(" 게임을 계속하시려면 Y를 그만두려면 N를 입력하세요\n");
		scanf("%c", &c);

		while (c != 'Y' || c != 'N')
		{
			printf("Y와 N 둘 중 하나를 넣으세요");

			printf(" 게임을 계속하시겠습니까?\n");
			printf(" 게임을 계속하시려면 Y를 그만두려면 N를 입력하세요\n");
			scanf("%c", &c);
			flushall();
		}
	}
	printf(" 게임을 종료하겠습니다");
	return 0;
}