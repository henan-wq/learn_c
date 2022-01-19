#include <stdio.h>
/* 练习1-8 编写一个统计空格、制表符与换行符个数的程序 */
main()
{
    int c, cspace, ctab, nl;

    cspace = 0;                         /* 统计空格个数的变量的初始值 */
    ctab = 0;                           /* 统计制表符个数的变量的初始值 */
    nl = 0;                             /* 统计换行符个数的变量的初始值 */
    while ((c = getchar()) != '#')
    {
        if (c == ' ')
            ++cspace;
        if (c == '\t')
            ++ctab;
        if (c == '\n')
            ++nl;
    }
    printf("空格个数是%d个\n", cspace);
    printf("制表符个数是%d个\n", ctab);
    printf("换行符个数是%d个\n", nl);
}

// 运行程序后，输入空格制表符和换行符，在需要统计它们时，输入字符#并回车，即可得到输出结果。