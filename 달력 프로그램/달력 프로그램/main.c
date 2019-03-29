#include <stdio.h>
#define leapyear(year) ((year)%4==0 && ( (year)%100!=0 || (year)%400==0 )) //����������ũ��

int main(void)
{
	int year, month; // ������ ���� ������ ����
	int totalday[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // �� ���� ���� �� (ù��° ���� ����)
	int lastyear, day, i;

	printf("��� ����� �޷��� ����Ͻðڽ��ϱ�?(����:2015 10): ");
	scanf("%d %d", &year, &month);
	if (month == 2 && leapyear(year)) // �ش�⵵�� �����̸�, 2���� �� 29��
		totalday[2] = 29;

	lastyear = year - 1; // �۳� ������ ����� ������ ����ϱ� ���� lastyear�� ����

	day = (lastyear + (lastyear / 4) - (lastyear / 100) + (lastyear / 400) + 1) % 7;
	/*
	lastyear : 1���� 365��, 1���� ���������� ������ �ѹ� �þ�� (365�� 7�� ������ 1�̱� ����)
	+(lastyear/4)-(lastyear/100)+(lastyear/400) : ������ ���������� ������ �ι� �þ�Ƿ�, lastyear���� �ִ� ��� ������ ���Ѵ�
	+1 : 1�� 1�� 1���� �Ͽ����� �ƴ϶� �������̹Ƿ� 1�� ���Ѵ� (0���� ����)
	%7 : ������ 7���� �̹Ƿ�, ���� ��갪�� 7�� ���� �������� year�� 1���� ù���� ���Ѵ�
	���������� ���� 0:�Ͽ���, 1:������, 2:ȭ����, 3:������, 4:�����, 5:�ݿ���, 6:�����
	*/

	for (i = 1; i<month; i++) // year�� month�� ���������� �� �� ���� ���ϱ� ���� for��
		day += totalday[i];

	day %= 7; // year�� month�� 1���� ���� ����

	printf("\n           %d�� %d��\n", year, month); // year�� month�� Ÿ��Ʋ ���
	printf("\n  ��  ��  ȭ  ��  ��  ��  ��"); // ���� ����Ʈ ���

	for (i = -day; i<totalday[month]; i++)
	{
		if ((i + day) % 7 == 0) // ��µ� ���ʰ� �Ͽ����̸�, ����
			printf("\n");
		if (i<0) // month�� 1���� ��µǱ� ������ ��¥�� �������� ä��
			printf("    ");
		else // ��¥ ���
			printf("%4d", i + 1);
	}
	printf("\n\n");

	return 0;
}
