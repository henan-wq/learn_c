//  file2.c
#include <stdio.h>

int main()
{
    double ff = 1E-10;
    printf("%E and %F\n", ff, ff);
    printf("%E and %.16F\n", ff, ff); /* 小数点后面输出16位的数字 */
    return 0;
}
/*
1.000000E-10 and 0.000000
1.000000E-10 and 0.0000000001000000
*/
