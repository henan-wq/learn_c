# 数的范围

- 对于一个字节（8位），可以表达的是：
    - 0000 0000 - 1111 1111
- 其中
    - 0000 0000 -> 0
    - 1111 1111 ~ 1000 0000 -> -1 ~ -128
    - 0000 0001 ~ 0111 1111 -> 1 ~ 127

```
//  file2.c
#include <stdio.h>

int main()
{
    char c = 255;
    int i = 255;
    printf("char=%ld,int=%ld\n", sizeof(char), sizeof(int));
    printf("c=%d, i=%d\n", c, i);

    return 0;
}
/*
输出结果如下：
char=1,int=4
c=-1, i=255

因为一个字节是8位，所以char是8位，int是32位
char:0000 0000
int:0000 0000 0000 0000 0000 0000 0000 0000
当赋值变量c为十进制255时，因为255的二进制为1111 1111，该值与
-1的二进制相同。

而变量i的类型是int，因为数位充足，所以它的二进制为：
0000 0000 0000 0000 0000 0000 1111 1111
*/
```

## 整数的范围

- char: 1字节: -128 ~ 127
- short: 2字节： -32768 ~ 32767
- int: 取决于编译器（CPU），通常的意义是“1个字”
- long：4字节
- long long: 8字节

## unsigned

- 如果一个字面量常数想要表达自己是unsigned，可以在后面
加u或U
    - 255U
- 用I或L表示long(long)
- `*unsigned`的初衷并非扩展数能表达的范围，而是为了做
纯二进制运算，主要是为了移位。

```:
//  file3.c
#include <stdio.h>

int main()
{
    unsigned char c = 255;
    int i = 255;
    printf("c=%d, i=%d\n", c, i);

    return 0;
}
/*
输出结果如下：

c=255, i=255
c=255, i=255
*/
```

> 总之用了unsigned后，二进制最前位的1就不代表负号了。

## 整数越界

整数是以纯二进制方式进行计算的，所以：

```
1111 1111 + 1 --> 1000 0000 -> 0
0111 1111 + 1 --> 1000 0000 -> -128
1000 0000 - 1 --> 0111 1111 -> 127
```

