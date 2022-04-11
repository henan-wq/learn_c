//  file1.c
#include <stdio.h>

int main()
{
    double ff = 1234.56789;
    printf("%e\n", ff);
    printf("%f\n", ff);
    printf("%E and %F\n", ff, ff);

    return 0;
}
/*
1.234568e+03
1234.567890
1.234568E+03 and 1234.567890
*/
