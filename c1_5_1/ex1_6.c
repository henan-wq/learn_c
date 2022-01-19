#include <stdio.h>

/* 验证表达式 getchar() != EOF 的值是0还是1. */
main()
{
    int c;

    c = getchar() != EOF;
    printf("%d\n", c);
}

/* 输出结果如下：
$ ./a.out 
2
1
$ ./a.out 
?
1
$ 
*/
// 所以表达式 getchar() != EOF 的值是1。