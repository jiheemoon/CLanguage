#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int temp, i, j;
	int judge[5];
	double avr;

	printf("5���� �ɻ������� ���� �Է�: ");
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
				temp = judge[j];       //������ ���� judge�� �Է��� n��° ����
				judge[j] = judge[i];   //n+1���� Ŭ ��� n��n+1�� �ڸ��� �ٲ۴�.
				judge[i] = temp;      //������ �� ����
			}
		}
	}
	printf("��ȿ���� : %5d%5d%5d\n", judge[1], judge[2], judge[3]); //2,3,4��° ���ڸ� �μ�

	avr = (double)(judge[1] + judge[2] + judge[3]) / 3;  //��հ� ����
	printf("���: %.1lf\n", avr);

	system("pause");
	return 0;
}
