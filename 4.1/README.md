# 循环

计算几位数：

第一次用if-else：

```

//	analysis_digits.c

#include <stdio.h>

int main()
{
	int a = 0;
	int digits = 0;

	scanf("%d", &a);

	if ( a > 999 ) {
		digits = 4;
	} else if ( a > 99 ) {
		digits = 3;
	} else if ( a > 9 ) {
		digits = 2;
	} else {
		digits = 1;
	}

	printf("digits = %d\n", digits);
	return 0;
}
```

第二次尝试用switch-case写：

```

//	analysis_digits2.c
//	switch-case

#include <stdio.h>

int main()
{
	int a = 0;
	int digits = 0;

	scanf("%d", &a);
	
	switch ( a > 999 ) {
	case 1:
		digits = 4;
		break;
	default:
		switch ( a > 99 ) {
		case 1:
			digits = 3;
			break;
		default:
			switch ( a > 9) {
			case 1:
				digits = 2;
				break;
			default:
				digits = 1;
				break;
			}
		}
	}

	printf("%d\n", digits);
	
	return 0;
}

```

## 人vs计算机

- 人的方式：用眼睛看
	- `352 --> 3位`
- 计算机的方式：判断数的范围来决定它的位数
	- `352∈[100,999] --> 3位`
	- 人对数字的计算能力比文字弱

## 程序实现

- 题目明确了4位数及以下的正整数，所以可以简化一些判断。

- 因为从高处往下判断，所以不需要判断上限了。

```

//	analysis_digits_teacher.c

#include <stdio.h>

int main()
{
	int x;
	int n = 1;

	scanf("%d", &x);
	
	if ( x > 999 ) {
		n = 4;
	} else if ( x > 99 ) {
		n = 3;
	} else if ( x > 9) {
		n = 2;
	}

	printf("%d\n", n);
	
	return 0;
}
```

问题：任何范围的正整数怎么办？

## 换个方式想

```

//	analysis_digits_cross_out.c
//
//	Analysis Digits
//	Each time the rightmost digit is crossed out,
//	it is counted until no more digits are crossed out.

#include <stdio.h>

int main()
{
	int x;
	int n = 0;

	scanf("%d", &x);
	
	n++;			/* 给n+1，该表达式的值是n原来的值 */
	x /= 10;		/* 使用复合赋值，也就是x = x / 10 */
	if ( x > 0 ) {
		n++;
		x /= 10;
		if ( > 0 ) {
			n++;
			x /= 10;
			if ...
		}
	}

	printf("%d\n", n);

	return 0;
}
```

这个方法还是很繁琐，如果需要数数的位数足够大，就需要一直写重复的代码。

更好的方法是用while：

```

//	analysis_digits_cross_out.c
//
//	Analysis Digits
//	Each time the rightmost digit is crossed out,
//	it is counted until no more digits are crossed out.

#include <stdio.h>

int main()
{
	int x;
	int n = 0;

	scanf("%d", &x);
	
	n++;			/* 给n+1，该表达式的值是n原来的值 */
	x /= 10;		/* 使用复合赋值，也就是x = x / 10 */
	while ( x > 0 ) {
		n++;
		x /= 10;
	}

	printf("%d\n", n);

	
	return 0;
}
```

不过目前还是不能计算很多位数的整数的位数。

## while 循环

一个while的语句：

```
while ( x > 0 ) {
	x /= 10;
	n++;
}
```

流程图如下：

```mermaid
graph LR
a{"条件满足？"} --> |是|b[循环体]
b --> a
a --> c[后续语句]
```

