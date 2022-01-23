// 动手写一个求幂的函数 power(m, n) 来说明函数定义的方法。
// 函数用于计算整数 m 的 n 次方幂，其中n是正整数。
// 对函数调用power(2, 5) 来说，其结果值为32
// 只能处理较小的整数的正整数次幂。（对了，标准库提供了一个函数叫pow(x, y)

// 下面是函数power(m, n)的定义及调用它的主程序

#include <stdio.h>

int power(int m, int n);    /* 声明语句，表明power函数有两个int类型的参数，并返回一个int类型的值*/
// 这种声明称为函数原型，它必须与power函数的定义和用法一致。如果函数的定义、用法与函数原型不一致，将出现错误。
// 函数原型与函数声明中的参数名不要求相同，原型中的参数名时可选的，我们也可以写成int power(int, int);
// 不过，合适的参数名能起到很好的说明性作用，因此我们在函数原型中总是指明参数名。

/* 测试power函数 */
main()      /* main函数*/
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));   /* main函数里，调用了两次power函数，每次调用时向power函数传递两个参数*/
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
/* 将基数提高到n次方；n >=0                  */
int power(int base, int n)  /* power函数的第一行语句，声明了函数类型，名字以及该函数返回结果的类型*/
{                           /* power函数的参数使用的名字旨在power函数内部有效，对其他任何函数都不可见 */
    int i, p;               /* 变量i与p就算在其他函数中出现过，也不会引起冲突，power函数的变量i与main函数的变量i无关*/
                            /* 我们通常把函数定义中圆括号内列表中出现的变量称为形式参数 */
                            // 把函数调用中与形式参数对应的值称为实际参数
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;               /* power函数计算所得的结果通过return语句返回给main函数，关键字return的后面可以跟任何表达式
}

/*
一些概念：

函数定义的一般形式为：
返回值类型 函数名（0个或多个参数声明）
{
    声明部分
    语句序列
}


return语句表达式：
return 表达式


函数不一定有返回值。不带表达式的return语句将把控制权返回给调用者，但不返回有用的值。这等同于在到
达函数的右终结花括号时，函数就到达了尽头，主调函数也可以忽略函数返回的值。

main函数末尾的return语句：由于main本身也是函数，因此也可以向其调用者返回一个值，该调用者实际上就是程序的执行环境。
一般来说，返回值为0表示正常终止，返回值为非0表示出现异常状况或出错结束条件。
前面的练习中都在main函数里省略了return语句，以后写的时候不要省略它。

*/

