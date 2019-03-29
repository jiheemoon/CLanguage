#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  MAX_NUM 100

main()
{
	int n = -1;  //정답이 아닌 숫자를 초기값으로 대입했음
	int answer;
	int count;
	int yesno;

	while (1) {
		count = 0;
		printf("숫자 맞추기 게임!   1 ~ %d 중 아무 숫자를 입력하세요! : ", MAX_NUM);
		srand(time(NULL));   //난수가 매회 변하도록 시간함수를 seed로 했다.
		answer = (rand() % MAX_NUM) + 1;  //임의의 난수를 발생시켜서 answer에 저장함
		while (n != answer) {   //정답과 선택한 숫자를 비교하여 선택한 숫자가 큰지 작은지를 알려준다.
			scanf("%d", &n);
			count++;

			if (n > answer)
				printf("\n더 작은 수를 선택하세요 : ");
			else if (n < answer)
				printf("\n더 큰 수를 선택하세요 : ");
			else if (n == answer) {
				printf("\n정답입니다.!! \n\n");
				break;
			}
		}

		printf("%d번만에 숫자를 맞추었습니다.\n", count);

		count = 1;

		do {   //게임을 더 할 것인지를 선택하도록 한다.
			printf("\n\n\n게임을 더 하시겠습니까? 1(yes) / 0(no) : ");  // 1을 선택하면 게임을 계속하고 0을 선택하면 게임을 종료합니다.
			scanf("%d", &yesno);
			if (yesno == 0) {
				printf("종료합니다.\n");
				exit(0);   //프로그램을 완전히 종료합니다.
			}
			else if (yesno == 1)
				break;
			else
				printf("\n입력이 틀렸습니다.");
		} while (1);

	}

}