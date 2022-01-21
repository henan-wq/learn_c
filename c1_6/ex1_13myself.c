#include <stdio.h>
// 练习 1-13 编写一个程序，打印输入中单词长度的直方图
#define IN 1
#define OUT 0
main()
{
    int c, i, nw, state;
    int ndigit[10];

    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    state = OUT;
    nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\n' || c == ' ')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
            ++ndigit[nw-1];
        }
        else
            ++ndigit[nw-1];

    }
    printf("总共有 %d 个单词\n", nw);
    for (i = 0; i < 10; ++i)
        printf("第 %d 个单词里含有 %d 个字母\n",
            i+1, ndigit[i]);
}