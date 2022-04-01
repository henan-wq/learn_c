//	test3.2.md

#include <stdio.h>

int main()
{
	int i = 1;

	printf("%d\n", i%3);	/* 测试i%3的值， （因为i<3，商为0，那么余数就是i自己，也就是1） */

	switch ( i%3 ) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

	return 0;
}
