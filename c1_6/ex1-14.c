#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15              /* 定义 柱状图的最大长度 为MAXHIST，值是15      */
#define MAXCHAR 128             /* 定义 最多不同的字符 为常量MAXCHAR，值是128   */

/* 打印不同字符的水平直方图频数      */
main()
{
    int c,i;        /* 声明变量c与i                                            */
    int len;        /* 声明 每条的长度 为变量len                                */
    int maxvalue;   /* 声明变量 maxvalue，maxvalue代表c[]的最大值               */
    int cc[MAXCHAR];    /* 定义字符计数器为数组 cc[MAXCHAR]                     */

    for (i = 0; i < MAXCHAR; ++i)   /* for循环语句，初始i=0，循环条件是i < 128，每次执行语句后i=i+1 */
        cc[i] = 0;                  /* 语句是给数组cc[i]赋值为0 */
    while ((c = getchar()) != EOF)  /* whiel语句，循环条件是（赋值c为输入的内容）c的值非EOF 为真，则执行以下语句          */
        if (c < MAXCHAR)            /* if语句，条件是变量c的值小于128 为真，则执行以下语句 */
            ++cc[c];                /* 数组cc[c]的值+1 */
    maxvalue = 0;                   /* 给变量maxvalue赋值0 */
    for (i = 1; i < MAXCHAR; ++i)   /* for循环语句，初始赋值变量i=1，循环条件是变量i小于128，若条件的值为真，则执行以下语句，每次执行语句后i=i+1 */
        if (cc[i] > maxvalue)       /* if语句，条件是 数组cc[i]的值大于变量maxvalue。若为真，则执行以下语句*/
            maxvalue = cc[i];       /* 将数组cc[i]的值传送给变量maxvalue */

    for (i = 1; i < MAXCHAR; ++i) { /* for循环语句，初始i=1，循环条件是i < 128，每次执行语句后i = i+1 */
        if (isprint(i))             /* */
            printf("%5d - %c - %5d : ", i, i, cc[i]);   /* */
        else
            printf("%5d -   - %5d : ", i, cc[i]);
        if (cc[i] > 0) {
            if ((len = cc[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        } else
            len = 0;
        while (len > 0) {
            putchar("*");
            --len;
        }
        putchar("\n");
    }
}
// 关于头文件<ctype.h>的讨论出现于教材p34，对于isprint的介绍出现于教材p227
// 这个程序可能被我写错了，待修改