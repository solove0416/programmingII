﻿#include <stdio.h>

int main()
{
	int a, b, c;

	printf("세개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
		if (b > c)    printf("%d %d %d\n", a, b, c);
		else if (a > c) printf("%d %d %d\n", c, a, b);
		else // b > a
			if (a > c) printf("%d %d %d\n", b, a, c);
			else if (c > b) printf("%d %d %d\n", c, b, a);
			else printf("%d %d %d\n", b, c, a);
