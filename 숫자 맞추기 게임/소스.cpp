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
			printf("���ڸ��߱����! 1 ~ 100 �߾ƹ����ڸ��Է��ϼ���!");
			scanf("%d", &key);
			flushall();

			if (num>key)
			{
				min = key + 1;
				printf("\t �� ū ���� �����ϼ���.\n)";
			}
			else if (num < key)
			{
				max = key - 1;

				printf("�� ���� ���� �����ÿ�.\n");
			}
			else
			{
				printf("\t\n �����Դϴ�.!!!\n");
				printf(" ����� ���� ���� %d�Դϴ�.\n", key);
				right = 1;
			}
		}

		printf(" ������ ����Ͻðڽ��ϱ�?\n");
		printf(" ������ ����Ͻ÷��� Y�� �׸��η��� N�� �Է��ϼ���\n");
		scanf("%c", &c);

		while (c != 'Y' || c != 'N')
		{
			printf("Y�� N �� �� �ϳ��� ��������");

			printf(" ������ ����Ͻðڽ��ϱ�?\n");
			printf(" ������ ����Ͻ÷��� Y�� �׸��η��� N�� �Է��ϼ���\n");
			scanf("%c", &c);
			flushall();
		}
	}
	printf(" ������ �����ϰڽ��ϴ�");
	return 0;
}