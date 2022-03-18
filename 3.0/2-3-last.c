#include <stdio.h>

int main()
{
	int x = 0;
	
	scanf("%d", &x);

	int a = x / 100;
	int b = x % 100 / 10;
	int c = x % 10;

	int y = c * 100 + b * 10 + a;

	printf("%d\n", y);

	return 0;
}
