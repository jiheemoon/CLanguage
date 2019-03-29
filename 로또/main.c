#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[6] = { 0 }; //로또 번호를 담을 배열, 6개의 숫자 기억
	int temp[6];
	int i, j;

	for (i = 0; i < 6; i++)
	{
		printf("로또 번호 입력 : "); //printf를 입력.
		scanf("%d", &num[i]); //num이라는 변수에 숫자하나를 입력받는다.
		temp[i] = num[i];
		if (num[i] > 0 && num[i] <= 45) //1부터 45사이의 숫자를 입력한다.
			for (j = 0; j < i; j++)
			{
				if (temp[j] == num[i])
				{
					printf("같은 번호가 있습니다!\n"); //printf를 입력. 같은 번호가 있습니다
					i--;
					break;
				}
			}
		else
			printf("1부터 45까지의 숫자만 입력하세요.\n"); //1부터 45까지의 숫자 입력.
	}
	printf("입력된 로또 번호 : ");  //로또 번호를 입력
	for (i = 0; i < 6; i++) //i값이 0에서 6보다 작을 동안 1씩 증가합니다.
	{
		printf("%5d", num[i]); //num[I]의 값을 출력합니다.
	}
	return 0; //함수 종료
}
