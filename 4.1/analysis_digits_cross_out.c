//	analysis_digits_cross_out.c
//
//	Analysis Digits
//	Each time the rightmost digit is crossed out,
//	it is counted until no more digits are crossed out.

#include <stdio.h>

int main()
{
	int x;
	int n = 0;

	scanf("%d", &x);
	
	n++;			/* 给n+1，该表达式的值是n原来的值 */
	x /= 10;		/* 使用复合赋值，也就是x = x / 10 */
	while ( x > 0 ) {
		n++;
		x /= 10;
	}

	printf("%d\n", n);

	
	return 0;
}
