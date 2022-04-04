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

### 这些值是怎么定的？

针对上面的程序：

- 比如为什么ret从0开始？
- 为什么while是`x>1`？
- 我们可不可以不用`while`语句而用`do-while`语句？

### 计数循环

```
int count = 100;
while ( count >= 0 ) {
	count --;
	printf("%d\n", count);
}
printf("发射！\n");
```

- 这个循环需要执行多少次？
- 循环停下来的时候，有没有输出最后的0？
- 循环结束后，count的值是多少？

答：我们先假设int count = 1、2、3。并统计每次这些值的循环执行次数。

当int count = 1，纸笔计算：
```
count

1		
进入循环
0		
打印输出0
进入循环
-1		
打印输出-1
不进入循环
打印输出发射！
```

> 当count = 1，循环次数：2

当 int count = 2，纸笔计算：

```
count
2
进入循环
1
打印输出1
进入循环
0
打印输出0
进入循环
-1
打印输出-1
不进入循环
打印输出发射！
```

> 当 count =2，循环次数：3

当 int count = 3,纸笔计算：

```
count
3
进入循环
2
打印输出2
进入循环
1
打印输出1
进入循环
0
打印输出0
进入循环
-1
打印输出-1
不进入循环
打印输出发射！
```

> 当 count = 3，循环次数：4

现在回答问题：

- 这个循环需要执行101次。
- 循环停下来的时候并没有输出最后的`0`（中途有输出过0）而是最后输出`-1`
- 循环结束后，count的值是`-1`

## 猜数游戏

让计算机来想一个数，然后让用户来猜，用户每输入一个数，就告诉它是大了还是小了，
直到用户猜中为止，最后还要告诉用户猜了多少次。

因为需要不断重复让用户猜，所以需要用到循环。

在实际写出程序之前，我们可以先用文字描述程序的思路。

核心重点是循环的条件。（人们往往会考虑循环终止的条件）

我的第一次尝试：

```

//	guess_myself.c

#include <stdio.h>

int main()
{
	int x = 456;		/* 假定计算机的随机数是456 */
	int guess_value;
	int times = 0;

	do
	{
		scanf("%d", &guess_value);
		times ++;
	} while ( guess_value != x);
	
	printf("你猜对了，你总共猜了%d次！\n", times);

	return 0;
}
```

第一次写出的程序运行能正常运行，接下来我看看怎么增加程序运行中的提示，比如根据
我输入的那些不满足条件的数而输出一些提示：我的数比“随机数”大还是小……

```

//	guess_myself_2.c

#include <stdio.h>

int main()
{
	int x = 456;		/* 假定计算机的随机数是456 */
	int guess_value;
	int times = 0;

	do
	{
		scanf("%d", &guess_value);
		times ++;

		if ( guess_value > x ) {
			printf("你猜测的数太大啦!\n");
		} else if ( guess_value < x ) {
			printf("你猜测的数太小啦！\n");
		}

	} while ( guess_value != x);
	
	printf("你猜对了，你总共猜了%d次！\n", times);

	return 0;
}
```

输出结果如下：

```
457
你猜测的数太大啦!
57
你猜测的数太小啦！
455
你猜测的数太小啦！
456
你猜对了，你总共猜了4次！
```

课程老师的讲解：

1. 计算机随机想一个数，记在变量number里；
2. 一个负责记次数的变量count初始化为0；
3. 让用户输入一个数字a；
4. count递增（加一）；
5. 判断a和number的大小关系，如果a大，就输出“大”；如果a小就输出“小”；
6. 如果a和number是不相等的（无论大还是小），程序转回到第3步；
7. 否则，程序输出“猜出”和次数，然后结束。

## 随机数

每次召唤`rand()`就得到一个随机的整数。

关于随机数的程序，可以这么写：

```
//	rand_1.c
#include <stdio.h>
#include <stdlib.h>	/* stdlib和time都是为了能在程序中使用rand在写的 */
#include <time.h>

int main()
{
	srand(time(0));	/* srand和rand()也是随机数有关的语句 */
	int a = rand();

	printf("%d\n", a);

	return 0;
}
// 暂时不用细究这些语句的原理，先“用”。
```

## `%100`

> `x%n`的结果是`[0, n-1]`的一个整数

所以：我们还可以让随机数变成100以内的数，我们知道，
当一个`整数%100`，会得到的余数的数位就只有十位和个位，那么我们让这个`随机数%100`就能
得到一个100以内的随机数。

那么修改`rand_1.c`，让它变成100以内的随机数`rand_2.c`：

```
//	rand_2.c
#include <stdio.h>
#include <stdlib.h>	/* stdlib和time都是为了能在程序中使用rand在写的 */
#include <time.h>

int main()
{
	srand(time(0));	/* srand和rand()也是随机数有关的语句 */
	int a = rand();

	printf("%d\n", a%100);

	return 0;
}
// 暂时不用细究这些语句的原理，先“用”。
```

现在我们把随机数的知识用到我们的程序`guess_teacher`上：

```
//	guess_teacher.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("请猜这个1到100之间数：");
		scanf("%d", &a);
		count ++;
		if ( a > number ) {
			printf("你猜的数大了。");
		} else if ( a < number ) {
			printf("你猜的数小了。");
		}
	} while ( a != number );
	printf("太好了！你用了%d次就猜到了答案。\n", count);

	return 0;
}
```

## 算平均数

让用户输入一系列的正整数，最后输入`-1`表示输入结束，然后程序计算出这些
数字的平均数，输出输入的数字的个数和平均数。

`变量->算法->流程图->程序`

$$
\operatorname{sum}=\frac{\sum_{i=1}^{n} x_{i}}{n}
$$


