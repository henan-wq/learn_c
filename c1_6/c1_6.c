#include <stdio.h>

/* count digits, white space, others */
main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)    /* for循环语句，第一个是初始化赋值只执行一次，第二个是条件，第三个是每次执行完指令后的增长。*/
        ndigit[i] = 0;          /* 第一次执行指令时i=0，所以ndigit[0]=0,之后因为++i，所以i=1 */
                                /* 第二次执行指令时i=1，所以ndigit[1]=0,之后因为++i，所以i=2 */
                                /* 第十次时i=9，所以ndigit[9]=0,之后……所以i=10 */
                                /* 因为i=10，不满足条件(i < 10),所以跳过for循环语句，我们在数组赋值了十个值 */
    while ((c = getchar()) != '#') {
        if (c >= '0' && c <= '9')   /* if语句，当c的值大于等于字符0与小于等于字符9，若为真，则执行 */
            ++ndigit[c-'0'];        /* 给ndigit[c-'0']的值加1 */
        else if (c ==' ' || c == '\n' || c == '\t') /* 当if语句条件为假时，else语句：如果c等于分隔符中的任一个，则*/
            ++nwhite;                              /* white的值加1 */
        else                                        /* 当if语句条件为假，else语句条件为假时，则：*/
            ++nother;                               /* 变量nother的值加1 */

    }                           /* while语句指令结束        */
    printf("digits =");         /* 打印字符串digits =       */
    for (i = 0; i < 10; ++i)    /* for循环语句，第一个时初始化赋值只执行一次，第二个是循环条件，第三个是每次循环后的步长 */
        printf(" %d", ndigit[i]);   /* 第一次执行时 */
}

// 待完成