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
        if (c < MAXCHAR)            /* if语句，循环条件是变量c的值小于128 为真，则执行以下语句 */
            ++cc[c];                /* 数组cc[c]的值+1 */
            
}