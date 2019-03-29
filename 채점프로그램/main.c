#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int temp, i, j;
	int judge[5];
	double avr;

	printf("5명의 심사위원의 점수 입력: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &judge[i]);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (judge[i] > judge[j])
			{
				temp = judge[j];       //루프를 돌며 judge에 입력한 n번째 수가
				judge[j] = judge[i];   //n+1보다 클 경우 n과n+1의 자리를 바꾼다.
				judge[i] = temp;      //오름차 순 정렬
			}
		}
	}
	printf("유효점수 : %5d%5d%5d\n", judge[1], judge[2], judge[3]); //2,3,4번째 숫자만 인쇄

	avr = (double)(judge[1] + judge[2] + judge[3]) / 3;  //평균값 저장
	printf("평균: %.1lf\n", avr);

	system("pause");
	return 0;
}
