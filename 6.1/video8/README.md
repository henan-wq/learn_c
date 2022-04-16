# 浮点数的范围与精度

## 超过范围的浮点数

- printf输出inf表示超过范围的浮点数：±∞
- printf输出nan表示不存在的浮点数

程序演示：

```
//  file1.c
#include <stdio.h>

int main()
{
    printf("%f\n", 12.0/0.0);
    printf("%f\n", -12.0/0.0);
    printf("%f\n", 0.0/0.0);

    return 0;
}
/*
inf
-inf
-nan
*/
```

再修改程序，编译失败：

```
//  file2.c
#include <stdio.h>

int main()
{
    printf("%f\n", 12/0);

    return 0;
}
/*
8$ gcc file2.c
file2.c: In function ‘main’:
file2.c:6:22: warning: division by zero [-Wdiv-by-zero]
     printf("%f\n", 12/0);
                      ^
file2.c:6:14: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
     printf("%f\n", 12/0);
             ~^     ~~~~
             %d
*/
```

> 整数不能除以0，因为无穷大无法用整数表达。


