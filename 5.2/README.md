# 5.2循环控制

## 素数

只能被1和自己整除的数，不包括1
如：2 3 5 7 11 13 17 19 ...

```
//	prime.c
#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);

	int i ;
	int isPrime = 1;	/* x是素数？ */
	for ( i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;		/* 一旦有一次isPrime = 0，就可以break跳出循环 */
		}
	}
	if ( isPrime == 1 ) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}


	return 0;
}
```

## break vs continue

break：跳出循环

continue：跳过循环这一轮剩下的语句进入下一轮

例子：

```
int x = 9;
int i;
int isPrime = 1;
for ( i=2; i<x; i++ ) {
	if ( x % i == 0 ) {
		isPrime = 0;
		continue;
	}
	print(%d\n", i);

//	当i=2，if判断条件不满足，直接执行printf，回到for循环
//	接着i=3，if判断条件满足，且执行了continue，于是printf被跳过，回到for循环
```

```mermain
graph TD
a[初始化] --> b{判断条件}
b --> |True|c[循环体]
c --> |Continue|d[步进]
c --> d
b --> |False|e[结束]
c --> |Break|e
```
