# 选择整数类型

- 为什么整数要有这么多种？
    - 为了准确表达内存，做底层程序的需要

- 没有特殊需要，就选择int
    - 现在的CPU的字长普遍是32位或64位，一次内存读写就是一个int，
    一次计算也是一个int，选择更短的类型不会更快，甚至可能更慢
    - 现在的编译器一般会设计内存对齐，所以更短的类型实际在内存
    中有可能也占据一个int的大小（虽然sizeof告诉你更小）
- unsigned与否只是输出的不同，内部计算是一样的。

```
类型        字长        范围                                        有效数字
float       32          ±(1.20x10^-38 ~ 3.40x10^38),0,±inf,nan      7
double      64          ±(2.2x10^-380 ~ 1.79x10^308),0,±inf,na      15

注解：±inf的意思是正负无穷大，nan的意思是：不是一个有效的数字。

7：只有七个数字是有效的，从第八个数字开始都是是无效的数字。
```

如何理解10^-38？

```
|---|<------有效范围------->
|   |
0   某个接近0的数

在0与这个接近0的数之间是无法表示的范围，这个接近0的数可以是10^-38，也可以是10^-380。

```

## 浮点的输入输出

```
类型        scanf       printf
float       %f          %f, %e
double      %lf         %f, %e
```

> `%e`是科学计数法

一些程序演示：

```
//  file1.c
#include <stdio.h>

int main()
{
    double ff = 1234.56789;
    printf("%e\n", ff);
    printf("%f\n", ff);
    printf("%E and %F\n", ff, ff);

    return 0;
}
/*
1.234568e+03
1234.567890
1.234568E+03 and 1234.567890
*/
```

## 科学计数法

`-5.67E+16`

1. 可选的`+`或`-`符号；（如+5.67E和-5.67E）
2. 可以用e或E；
3. 小数点也是可选的；
4. 后面的符号可以是`-`或`+`也可以省略（表示+）；
5. 整个词不能有空格。

程序演示：

```

//  file2.c
#include <stdio.h>

int main()
{
    double ff = 1E-10;
    printf("%E and %F\n", ff, ff);
    printf("%E and %.16F\n", ff, ff); /* 小数点后面输出16位的数字 */
    return 0;
}
/*
1.000000E-10 and 0.000000
1.000000E-10 and 0.0000000001000000
*/

```

## 输出精度

- 在%和f之间加上`.n`可以指定输出小数点后几位，这样的输出是做4舍5入的
    - `printf("%.3f\n", -0.0049);`
    - `printf("%.30f\n", -0.0049);`
    - `printf("%.3f\n", -0.00049);`

程序：

```
//  file3.c
#include <stdio.h>

int main()
{
    //  double ff = 1E-10;
    printf("%.3f\n", -0.0049);
    printf("%.30f\n", -0.0049);
    printf("%.3f\n", -0.00049);
    return 0;
}
/*
-0.005
-0.004899999999999999841793218991
-0.000
*/
```
