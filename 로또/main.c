#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[6] = { 0 }; //�ζ� ��ȣ�� ���� �迭, 6���� ���� ���
	int temp[6];
	int i, j;

	for (i = 0; i < 6; i++)
	{
		printf("�ζ� ��ȣ �Է� : "); //printf�� �Է�.
		scanf("%d", &num[i]); //num�̶�� ������ �����ϳ��� �Է¹޴´�.
		temp[i] = num[i];
		if (num[i] > 0 && num[i] <= 45) //1���� 45������ ���ڸ� �Է��Ѵ�.
			for (j = 0; j < i; j++)
			{
				if (temp[j] == num[i])
				{
					printf("���� ��ȣ�� �ֽ��ϴ�!\n"); //printf�� �Է�. ���� ��ȣ�� �ֽ��ϴ�
					i--;
					break;
				}
			}
		else
			printf("1���� 45������ ���ڸ� �Է��ϼ���.\n"); //1���� 45������ ���� �Է�.
	}
	printf("�Էµ� �ζ� ��ȣ : ");  //�ζ� ��ȣ�� �Է�
	for (i = 0; i < 6; i++) //i���� 0���� 6���� ���� ���� 1�� �����մϴ�.
	{
		printf("%5d", num[i]); //num[I]�� ���� ����մϴ�.
	}
	return 0; //�Լ� ����
}
