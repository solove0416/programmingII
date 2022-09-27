#include <stdio.h>

int main() {
	int n;

	printf("자연수 입력:");
	scanf_s("%d", &n);
	

	//ctrl-kc(코멘트),ctrl-ku(언코멘트)
	/*int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;*/
	
	int sum = 0;
	int i = 1;//끝나는 조건
	

	while (i <= n) {//끝나는 지점
		sum += i;
		i++;//변하는 조건
	}printf("1부터 %d까지의 합: %d\n", n, sum);

	//10번 반복
	for (int i = 0; i <= 10; i++)
		printf("Hello\n");
	printf("\n\n");
	for (int i = 1; i < +10; i++);
		printf("Hello\n");//위의 for 문자에 ;를 붙이면 출력값은 Hello하나가 출력된다. 조건이 씹히기 때문이다.
	

}