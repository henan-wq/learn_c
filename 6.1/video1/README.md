# 6.1 数据类型

C是有类型的语言

- C语言的变量，必须：
    - 在确定前定义，并且
    - 确定类型
- C以后的语言向两个方向发展：
    - C++/Java更强调类型，对类型的检查更严格。
    - JavaScript、Python、PHP不看重类型，甚至不需要事先定义。

类型安全

- 支持强类型的观点认为明确的类型有助于尽早发现程序中的简单错误
- 反对强类型的观点认为过于强调类型迫使程序员面对底层、实现
而非事务逻辑
- 总的来说，早期语言强调类型，面向底层的语言强调类型
- C语言需要类型，但是对类型的安全检查并不足够

C语言的类型

- 整数
    - char、short、int、long、*long long*（C99）
- 浮点数
    - float、double、*long double*（C99）
- 逻辑
    - *bool*（C99）
- 指针
- 自定义类型

## 类型有何不同

类型名称：int、long、double

输出时的格式化：%d、%ld、%lf

所表达的数的范围：char < short < int < float < double

内存中所占据的大小：1个字节到16个字节

内存中的表达形式：二进制数（补码）、编码

## sizeof

是一个运算符，给出某个类型或变量在内存中所占据的字节数

- sizeof(int)
- sizeof(i)

```
//  file1.c
#include <stdio.h>

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a));
    printf("sizeof(double)=%ld\n", sizeof(double));
    return 0;
}
/*
输出结果（字节）：
sizeof(int)=4
sizeof(a)=4
sizeof(double)=8
 */
 ```

## sizeof

- 是静态运算符，它的结果在编译时刻就决定了
- 不要在sizeof的括号里做运算，这些运算不会做的。

```
//  file2.c
#include <stdio.h>

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a++));
    printf("sizeof(double)=%ld\n", sizeof(double));
    return 0;
}
/*
输出结果（字节）：
sizeof(int)=4
sizeof(a)=4
sizeof(double)=8
*/
```

> 仔细看`a++`的值

再看程序：
```
//  file3.c
#include <stdio.h>

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a+1.0)=%ld\n", sizeof(a+1.0));
    printf("sizeof(double)=%ld\n", sizeof(double));
    return 0;
}
/*
输出结果（字节）：
sizeof(int)=4
sizeof(a+1.0)=8
sizeof(double)=8
*/
```

> 因为double是8个字节，a是整型4个字节，相加会转换为double，都是8个字节了。 
