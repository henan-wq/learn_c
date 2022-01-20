// 练习1-12
// 编写一个程序，以每行一个单词的形式打印其输入。

#include <stdio.h>

#define IN 1        /* 定义常量IN，值为1 */
#define OUT 0       /* 定义常量OUT，值为0 */

main()
{
    int c, state;   /* 定义变量c与state */

    state = OUT;    /* 把常量OUT的值0传送给变量state，state的值为0 */
    while ((c = getchar()) != '#') {    /* while语句条件，getchar()被赋值给变量c，当c不等于#时，执行以下语句 */
        if (c == ' ' || c == '\n' || c == '\t') {   /*if语句条件，如果c等于空格或换行或制表符之一，则执行以下*/
            if (state == IN) {                          /*if语句条件，如果变量state等于常量IN：1为真，则执行以下*/
                putchar('\n');                              /* 输出换行符 */
                state = OUT;                                /* 且将state状态设置为OUT:0 */
            }   /* 第二个if语句的执行指令结尾*/

        }   /* if语句的执行指令结尾 */
        else if (state ==OUT) {     /* else if语句条件，当c在第一个if语句条件为假时，且如果state的值为OUT:0,则 */
            state = IN;                 /* 将state设置为IN：1 */
            putchar(c);                 /* 且输出我们的输入 */
        }   /* else if语句执行指令结尾 */
        else                        /* else语句，没有条件，当第一个if语句与else if的条件语句都为假时，执行以下内容*/
            putchar(c);
    }       /* while语句的执行指令结尾 */
}
/*
程序分为三大部分，分别是一个if语句和两个else语句：
1. 如果输入是分隔符；
    如果状态是IN，
        把分隔符替换成换行，打印
        且将状态设置为OUT
2. 如果输入不是分隔符(是内容)，如果状态是OUT
    设置状态为IN
    且打印我们的内容
3. 如果输入不是分隔符(是内容)，状态是IN
    直接打印我们的内容
*/