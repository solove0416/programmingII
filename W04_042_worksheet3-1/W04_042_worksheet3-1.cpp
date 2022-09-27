#include <stdio.h>

int main()
{
	float f;
	float c;

	printf("화씨\t섭씨\n");
	printf("=============\n");

	f = 10;		//시작하는값이 있어야하고
	while (f <= 100) {	//끝나는 조건
		c = 5.0 / 9 * (f - 32);
		printf("%5.1f\t %5.1f\n", f, c);
		f += 10;	//변하는 조건
	}

}