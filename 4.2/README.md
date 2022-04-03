# 循环计算

程序log2x计算输入数x为2的几次方：

```
//	log2x
int x;
int ret = 0;

scanf("%d", &x);
while ( x > 1 ) {
	x /= 2;
	ret ++;
}
printf("log2 of %d is %d.", x, ret);
```


纸笔开方：

```
x	ret
scanf	0
72	0
36	1
18	2
9	3
4	4
2	5
1	6

64	0
32	1
16	2
8	3
4	4
2	5
1	6

2^5=32
2^6=64
2^7=128

```

运行log2x，我们会发现输出不是我们想要的结果：

```
64
log2 of 1 is 6.
```

因为该程序输出的x会随着程序的运行而变化的，所以需要增加一个变量保存一开始未经变化的值。

> 我们可以在计算之前先保存原始的值，后面可能有用。

经过修改后的`log2x_new.c`

```

//	log2x_new.c

#include <stdio.h>

int main()
{
	int x;
	int ret = 0;

	scanf("%d", &x);
	int t = x;
	while ( x > 1 ) {
		x /= 2;
		ret ++;
	}
	printf("log2 of %d is %d.\n", t, ret);
}
```

输出结果也是我们想要的：

```
64
log2 of 64 is 6.
```
