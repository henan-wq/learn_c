//	try.c

#include <stdio.h>

int main()
{
        int x = 0;
        int f = 0;

        scanf("%d", &x);

        switch ( x < 0 ) {
		case 1:
			f = -1;
			break;
		default:
			switch ( x == 0 ) {
				case 1:
					f = 0;
					break;
				default:
					f = 2 * x;
					break;
			}
        }

        printf("f(%d) = %d\n", x, f);

        return 0;
}
