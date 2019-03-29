#include <stdio.h>

void main()

{

	int i, y;

	int days;

	printf("년도입력: "); scanf("%d", &y);



	// 날짜계산

	y--;

	days = (y + (y / 4) - (y / 100) + (y / 400) + 1) % 7;



	// 달력출력

	printf(" 일월화수목금토");

	for (i = -days; i<31; i++)

	{

		// 주마다 개행

		if ((i + days) % 7 == 0)

			printf("\n");



		// 공백출력

		if (i<0)

		{

			printf("   ");

		}

		// 날짜출력

		else

		{

			printf("%3d", i + 1);

		}

	}

	printf("\n");

}
