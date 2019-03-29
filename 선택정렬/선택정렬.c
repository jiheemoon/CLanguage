#include <stdio.h>
//배열의 값을 오름차순으로 정렬
int main(void)
{
	int a[] = { 3, 2, 1, 6, 5 }; 
	int i, j, temp;
	int min;
	for (i = 0; i < 5; i++)
	{
		printf("score[%d] : %d \n", i, a[i]);
	}
	for (i = 0; i < 4; i++) // 가장 갖을 겂을 구하는 과정 반복 횟수
	{
		min = i; // i가 가장 작은 값의 첨자라고 가정
		for (j = i + 1; j < 5; j++){ // 첫 번째 비교대상은 기준요소 다음부터 시작
			if (a[min] > a[j]) // 가장 작은 값이 a[j]보다 크면
			{
				min = j; //j가 가장 작은 값의 첨자가 된다.
			}
		}
		if (min != i) // 가장 작은 값의 위치가 바뀌었으면
		{
			temp = a[i]; // 두개의 값 교환
			a[i] = a[min]; 
			a[min] = temp;
		}
	}
	printf("**Sorting Result**\n");// 결과 출력
	for (i = 0; i < 5;i++)
	{ 
		printf("score[%d] : %d \n",i ,a[i]);
	}
	return 0;
}
