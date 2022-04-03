//	log2x.c

#include <stdio.h>

int main()
{
	int x;
	int ret = 0;

	scanf("%d", &x);
	while ( x > 1 ) {
		x /= 2;
		ret ++;
	}
	printf("log2 of %d is %d.\n", x, ret);
}
