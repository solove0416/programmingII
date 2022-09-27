#include	<stdio.h>

int main()
{
	int score;
	scanf_s("%d", &score);

	switch (score/10) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
	
	
	/*if (score >= 90)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 80)
		printf("C\n");
	else if (score >= 80)
		printf("D\n");
	else
		printf("F\n");*/
}