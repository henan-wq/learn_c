//	analysis_digits2.c
//	switch-case

#include <stdio.h>

int main()
{
	int a = 0;
	int digits = 0;

	scanf("%d", &a);
	
	switch ( a > 999 ) {
	case 1:
		digits = 4;
		break;
	default:
		switch ( a > 99 ) {
		case 1:
			digits = 3;
			break;
		default:
			switch ( a > 9) {
			case 1:
				digits = 2;
				break;
			default:
				digits = 1;
				break;
			}
		}
	}

	printf("%d\n", digits);
	
	return 0;
}
