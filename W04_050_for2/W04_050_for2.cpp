//for 문을 사용할 때 주의할 점

#include <stdio.h>

int main()
{
	int i;
	
	for (i = 0; i < 10; i++)//i가 선언되는 범위는 아래의 printf의 범위까지만 통용된다.
		printf("for: %d\n", i);
	printf("%d\n", i);// 아래의 i를 사용하기 위해서는 int i를 사용하여 선언이 되어야한다.
}