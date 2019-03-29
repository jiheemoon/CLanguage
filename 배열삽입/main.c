#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, n = 0, a = 0;
	int arrsize = 0;
	int arr[50];

	printf("arrsize 입력(50미만의 숫자): ");
	scanf("%d", &arrsize);
	arrsize += 1;

	for (i = 0; i < arrsize - 1; i++)
	{
		printf("arr 입력(%d번째): ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("n, a 입력: ");
	scanf("%d %d", &n, &a);

	for (i = arrsize; i > n - 1; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[n - 1] = a;

	for (i = 0; i < arrsize; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	system("pause");
	return 0;
}
