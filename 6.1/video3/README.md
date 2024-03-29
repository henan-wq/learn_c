# 整数的内部表达

计算机内部的一切都是二进制

- 18    --> 00010010
- 0     --> 00000000
- -18   --> ?

## 如何表示负数

十进制用`-`来表示负数，在做计算的时候

```
12+(-18)    ->  12-18   ->  -6
12-(-18)    ->  12+18   ->  30
12*(-18)    ->  -(12*18)
12 / (-18)  ->  -(12/18)
```

## 二进制负数

- 1个字节可以表达的数：
    - 00000000 -- 11111111（0-255）
- 三种方案：
    1. 仿照十进制，有一个特殊的标志表示负数
    2. 取中间的数为0，如10000000表示0，比它小的是负数，比它大的是正数
    3. 补码

## 补码

- 考虑-1，我们希望-1+1 --> 0 如何做到？
    - 0 --> 0000 0000
    - 1 --> 0000 0001
    - 1111 1111 + 0000 0001 --> 1 0000 0000
- 因为0 - 1 --> -1，所以-1=
    - 1 0000 0000 - 0000 0001 --> 1111 1111
    - 1111 1111被当作纯二进制看待时，是255，被当作补码看待时是-1
- 同理，对于-a，其补码就是0-a，实际是2^n - a，n是这种类型的位数。

