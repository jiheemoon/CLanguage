#include <stdio.h>
//�迭�� ���� ������������ ����
int main(void)
{
	int a[] = { 3, 2, 1, 6, 5 }; 
	int i, j, temp;
	int min;
	for (i = 0; i < 5; i++)
	{
		printf("score[%d] : %d \n", i, a[i]);
	}
	for (i = 0; i < 4; i++) // ���� ���� ���� ���ϴ� ���� �ݺ� Ƚ��
	{
		min = i; // i�� ���� ���� ���� ÷�ڶ�� ����
		for (j = i + 1; j < 5; j++){ // ù ��° �񱳴���� ���ؿ�� �������� ����
			if (a[min] > a[j]) // ���� ���� ���� a[j]���� ũ��
			{
				min = j; //j�� ���� ���� ���� ÷�ڰ� �ȴ�.
			}
		}
		if (min != i) // ���� ���� ���� ��ġ�� �ٲ������
		{
			temp = a[i]; // �ΰ��� �� ��ȯ
			a[i] = a[min]; 
			a[min] = temp;
		}
	}
	printf("**Sorting Result**\n");// ��� ���
	for (i = 0; i < 5;i++)
	{ 
		printf("score[%d] : %d \n",i ,a[i]);
	}
	return 0;
}
