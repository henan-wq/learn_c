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

