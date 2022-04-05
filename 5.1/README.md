# 第三种循环——FOR循环

## 阶乘

- `n! = 1x2x3x4x...xn`
- 写一个程序，让用户输入n，然后计算输出`n!`。

尝试写：

```
//	factorial.c
#include <stdio.h>

int main()
{
	int n;
	int factorial = 1;
	int initial = 1;

	scanf("%d", &n);
	while ( initial < n+1) {
		factorial *= initial;
		initial = initial + 1;
	}
	printf("n = %d, factorial = %d, initial = %d\n", n, factorial, initial);

	return 0;
}
```


