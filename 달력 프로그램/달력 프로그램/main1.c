#include <stdio.h>

void main()

{

	int i, y;

	int days;

	printf("�⵵�Է�: "); scanf("%d", &y);



	// ��¥���

	y--;

	days = (y + (y / 4) - (y / 100) + (y / 400) + 1) % 7;



	// �޷����

	printf(" �Ͽ�ȭ�������");

	for (i = -days; i<31; i++)

	{

		// �ָ��� ����

		if ((i + days) % 7 == 0)

			printf("\n");



		// �������

		if (i<0)

		{

			printf("   ");

		}

		// ��¥���

		else

		{

			printf("%3d", i + 1);

		}

	}

	printf("\n");

}
