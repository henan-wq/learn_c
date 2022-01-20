// 练习1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
#include <stdio.h>

#define NONBLANK 'a'

/* replace string of blanks with a single blank             */
main()
{
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != '#') {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc = c;
    }

}
// 该习题解答是看了答案后写的，因为想不出来怎么写。