#include <stdio.h>

int main()
{
	int a, b;
	
	scanf_s("%d %d", &a, &b); //&는 주소라는 표시
	printf("a = %d, b = %d, a+b = %d\n", a, b, a + b);

}

