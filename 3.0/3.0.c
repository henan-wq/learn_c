#include <stdio.h>

int main()
{
	int A;
	int B;

	printf("在一行中给出两个正整数A和B,请使用空格或回车分隔。\n");
	scanf("%d %d", &A, &B);
	
	printf("%d + %d = %d\n", A, B, A+B);
	printf("%d - %d = %d\n", A, B, A-B);
	printf("%d * %d = %d\n", A, B, A*B);
	printf("%d / %d = %d\n", A, B, A/B);

	return 0;
}
