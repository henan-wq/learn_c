// 练习1-7 编写一个打印 EOF 值的程序。
#include <stdio.h>
main()
{
    int c;
    c = EOF;
    printf("EOF's value is %d\n", c);
    printf("EOF's value add 1 is %d\n", c+1);
}

/* 输出结果如下：
$ ./a.out 
EOF's value is -1
EOF's value add 1 is 0
*/