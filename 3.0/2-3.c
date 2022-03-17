#include <stdio.h>

int main()
{
	int a = 0;
	
	/* 变量a拥有我们输入的三位数 */
	scanf("%d", &a);

	/* 接下来要取百位数上的数字 */
	int hundred_digits = a / 100;
	/* 我们需要将原输入的三位数去掉百位数字，使之成为一个十位数。再取十位上的数字 */
	int decimal_digit = (a - hundred_digits * 100) / 10;
	/* 接着取个位上的数字 */
	int single_digit = (a - hundred_digits * 100) % 10;

	/* 让个位上的数字成为百位数，十位上的数字成为十位数，百位上的数字成为个位数。 */
	int b = single_digit * 100 + decimal_digit * 10 + hundred_digits;

	printf("%d\n", b);

	return 0;
}
