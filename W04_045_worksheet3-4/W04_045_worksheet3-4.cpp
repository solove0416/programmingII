#include <stdio.h>

int main()
{
	int evensum = 0;// 짝수 합
	int oddsum = 0;//홀수 합
	int n, i;


	printf("n을 입력 : ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		if (i % 2 == 0) //짝수
			evensum += i;
		else //홀수
			oddsum += i;
		i++;
	}
	printf("홀수의 합 = %d,짝수의 합 = %d",
		oddsum, evensum);
}