//	analysis_digits.c

#include <stdio.h>

int main()
{
	int a = 0;
	int digits = 0;

	scanf("%d", &a);

	if ( a > 999 ) {
		digits = 4;
	} else if ( a > 99 ) {
		digits = 3;
	} else if ( a > 9 ) {
		digits = 2;
	} else {
		digits = 1;
	}

	printf("digits = %d\n", digits);
	return 0;
}

