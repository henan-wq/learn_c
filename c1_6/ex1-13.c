// 练习1-13 编写一个程序，打印输入中单词长度的直方图。
# include <stdio.h>

#define MAXHIST 15                      /* 柱状图的最大长度 */
#define MAXWORD 11                      /* 一个词的最大长度 */
#define IN 1
#define OUT 0

/* print horizontal histogram                                                                           */
main()
{
    int c, i, nc, state;
    int len;                            /* 每条的长度 */
    int maxvalue;                       /* 最大值为 wl[] */
    int ovflow;                         /* 溢出的字数 */
    int wl[MAXWORD];                    /* 字长计数器 */

    state = OUT;
    nc = 0;                             /* 一个字中的字符数 */
    ovflow = 0;                         /* 字数 大于等于 一个词的最大长度的个数 */
    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c== '\t') {
            state = OUT;
            if (nc > 0)
                if (nc < MAXWORD)
                    ++wl[nc];
                else
                    ++ovflow;
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;         /* 新字的开始 */
        } else
            ++nc;           /* 在一个字里面 */
    }
    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i)
        if (wl[i] > maxvalue)
            maxvalue = wl[i];
    for (i = 1; i < MAXWORD; ++i) {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len =1;
        } else
            len = 0;
        while (len > 0) {
            putchar ('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0)
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
}