#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  MAX_NUM 100

main()
{
	int n = -1;  //������ �ƴ� ���ڸ� �ʱⰪ���� ��������
	int answer;
	int count;
	int yesno;

	while (1) {
		count = 0;
		printf("���� ���߱� ����!   1 ~ %d �� �ƹ� ���ڸ� �Է��ϼ���! : ", MAX_NUM);
		srand(time(NULL));   //������ ��ȸ ���ϵ��� �ð��Լ��� seed�� �ߴ�.
		answer = (rand() % MAX_NUM) + 1;  //������ ������ �߻����Ѽ� answer�� ������
		while (n != answer) {   //����� ������ ���ڸ� ���Ͽ� ������ ���ڰ� ū�� �������� �˷��ش�.
			scanf("%d", &n);
			count++;

			if (n > answer)
				printf("\n�� ���� ���� �����ϼ��� : ");
			else if (n < answer)
				printf("\n�� ū ���� �����ϼ��� : ");
			else if (n == answer) {
				printf("\n�����Դϴ�.!! \n\n");
				break;
			}
		}

		printf("%d������ ���ڸ� ���߾����ϴ�.\n", count);

		count = 1;

		do {   //������ �� �� �������� �����ϵ��� �Ѵ�.
			printf("\n\n\n������ �� �Ͻðڽ��ϱ�? 1(yes) / 0(no) : ");  // 1�� �����ϸ� ������ ����ϰ� 0�� �����ϸ� ������ �����մϴ�.
			scanf("%d", &yesno);
			if (yesno == 0) {
				printf("�����մϴ�.\n");
				exit(0);   //���α׷��� ������ �����մϴ�.
			}
			else if (yesno == 1)
				break;
			else
				printf("\n�Է��� Ʋ�Ƚ��ϴ�.");
		} while (1);

	}

}