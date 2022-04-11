# 整数的输入输出

- 只有两种形式：int或long long
    - %d: int
    - %u: unsigned
    - %ld: long long
    - %lu: unsigned long long

接下来看一个实例：

```
//  file1.c
#include <stdio.h>

int main()
{
    char c =  -1;
    int i = -1;
    printf("c=%u,i=%u\n", c, i);
    return 0;
}
/*
 * c=4294967295,i=4294967295
 */
 ```

因为c与i都不是unsigned，所以可以是-1，但是输出时被当作unsigned输出
`%u`。我们得到了两个非常大的数。这两个数是unsigned int所能表达的最
大的数。`-1`即代表全1

当我们想把把小于int的变量传给printf时，编译器会把这些变量转换为int传给
printf，因为一开始定义变量的时候是有符号的，所以被扩展到所有位都是1，
既然所有位都是1，那么unsigned输出的结果就是最大值4294967295了！

## 8进制和16进制

- 一个以0开始的数字字面量是8进制
- 一个以0x开始的数字字面量是16进制
- `%o`用于8进制，`%x`用于16进制
- 8进制和16进制只是如何把数字表达为字符串，与内部如何表达数字无关

```
//  file2.c
#include <stdio.h>

int main()
{
    char c =  012;
    int i = 0x12;
    printf("c=%d,i=%d\n", c, i);
    return 0;
}
/*
c=10,i=18
*/
// 如果我们想让printf输出8进制那就用%o，十六进制就用%x
```

## `*` 8进制和16进制

- 16进制很适合表达二进制数据，因为4位二进制正好是一个16进制位
- 8进制的一位数字正好表达3位二进制
    - 因为早期计算机的字长是12的倍数，而非8


