#include <stdio.h>
int main()
{
	int n;
	
	printf("n을 입력: ");
	scanf_s("%d",  &n);
	
	//for (int i = 1; i <= n; i++)
	//	if (i % 3 == 0)
	//		continue;//3의 배수라면 출력하지 않고 다시 위로 올라간다.
	//	else
	//		printf("%d\n", i);
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)
			break;
		printf("%d\n", i);
	}


}