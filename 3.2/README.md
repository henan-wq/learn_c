# 3.2 分支

就算每个条件要执行的语句只有1句的时候，
仍保留if语句和else语句里的大括号，能减少了别人看错程序的风险：

```
//      max3.c

#include <stdio.h>

int main()
{
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);


        int max = 0;

        if ( a>b ) {
                if ( a>c ) {
                        max = a;
                } else {
                        max = c;
                }
        } else {
                if ( b>c ) {
                        max = b;
                } else {
                        max = c;
                }
        }


        printf("The max is %d\n", max);


        return 0;
}
```

## 嵌套的判断

当if的条件满足或不满足的时候要执行的语句也可以是
一条if或if-else语句，这就是嵌套的if语句。

```
if ( code == READY )
	if ( count <20 )
		printf("一切正常\n");
	else
		printf("继续等待\n");
```

## else的匹配

在上面的代码片段中，else总和最近的那个if匹配，但是它们也都被最外面的另一个 `if ( code == READY )` 所包括。

接下来我在外面的if后面添加大括弧，同时也在里面的else前添加大括弧：

```
if ( code == READY ) {
        if ( count <20 )
                printf("一切正常\n");
} else
	printf("继续等待\n");
```

那么，此时else就会在 ` code== READY ` 不被满足的情况下执行，而与` if ( count <20 ) `不再有关系。

## 缩进

** 缩进格式不能暗示`else` 的匹配 **

```
if ( code == READY )
	if ( count <20 )
		printf("一切正常\n");
else
	printf("继续等待\n");
```

以上代码如果满足`if ( code == READY )` ，却不满足`if ( count <20 )`，
那么会执行else语句。

## 嵌套的if

```
if ( gameover == 0)
	if (player2move = 2)
printf("Your turn\n");
```

## tips

- 在if或else后面总是使用`{}`
- 即使只有一条语句的时候

## 分段函数

按条件写一段程序，条件如下：

```
f(x) = -1; x<0
     = 0;  x=0
     = 2x; x>0
```

我第一遍写的程序：

```

//	分段函数

#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%d", &x);

	if ( x < 0 ) {
		printf("f(%d) = -1\n", x);
	} else {
		if ( x == 0 ) {
			printf("f(%d) = 0\n", x);
		} else {
			printf("f(%d) = %d\n", x, 2 * x);
		}
	}

	return 0;

}
```

第二次写的程序：

```

//	分段函数

#include <stdio.h>

int main()
{
	int x = 0;
	int f = 0;

	scanf("%d", &x);
	if ( x < 0 ) {
		f = -1;
	} else {
		if ( x == 0 ) {
			f = 0;
		} else {
			f = 2 * x;
		}
	}

	printf("f(%d) = %d\n", x, f);

	return 0;
}
```

课程上的新方法：`else if`：

```

//	分段函数
#include <stdio.h>

int main()
{
	int x = 0;
	int f = 0;

	scanf("%d", &x);

	if ( x < 0 ) {
		f = -1;
	} else if ( x == 0 ) {
		f = 0;
	} else {
		f = 2 * x;
	}

	printf("f(%d) = %d\n", x, f);
	
	return 0;
}
```

> 新方法出现的`else if` 本质上对应的是`if ( x > 0 )`，而最后的`else`对应的是`else if`。
这个写法可以少写一次大括号，也很有趣……

该分段函数的流程图如下：

```mermaid
graph TD
a {"x<0"} --> |Y| b ["f=-1"]
	b --> c (结束)
	a --> |N| d {"x==0"}
	d --> |Y| e ["f=0"]
	e --> c
	d --> |N| f ["f=2*x"]
	f --> c
```

