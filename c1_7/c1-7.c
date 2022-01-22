// 动手写一个求幂的函数 power(m, n) 来说明函数定义的方法。
// 函数用于计算整数 m 的 n 次方幂，其中n是正整数。
// 对函数调用power(2, 5) 来说，其结果值为32
// 只能处理较小的整数的正整数次幂。（对了，标准库提供了一个函数叫pow(x, y)

// 下面是函数power(m, n)的定义及调用它的主程序

#include <stdio.h>

int power(int m, int n);

/* 测试power函数 */
main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
/* 将基数提高到n次方；n >=0                  */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

/*
函数定义的一般形式为：
返回值类型 函数名（0个或多个参数声明）
{
    声明部分
    语句序列
}
*/