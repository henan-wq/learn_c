#include <stdio.h>

#define NONBLANK 'a'

main()
{
    int c, clast;
    clast = NONBLANK;
    while ((c = getchar()) != '#') {
        if (c != ' ')
            putchar(c);
        else if (clast != ' ')
            putchar(c);
        clast = c;

    }
}
// 尝试将习题1-9改成if-else语句的版本