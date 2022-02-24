# 2.1 变量

C语言的保留字

```
auto	break	case	char	const	continue	default		do	double
else	enum	extern	float	far	goto		if		int	long	
register	return
short	signed	sizeof	static	struct	switch		typedef		union	unsigned
void	volatile	while	inline	restrict
```

## 变量初始化

```
<类型名称> <变量名称> = <初始值>;
例如：
int price = 0;
int amount = 100;


组合变量定义的时候，也可以在这个定义中单独给单个变量赋初值：
int price = 0, amount = 100;
```

> 变量初始化是一个很重要步骤，若没有可能会导致后续使用该变量的计算结果出现奇怪的错误。

一个关于变量没有被初始化的例子：

```
int price, amount = 100, age;
这里的price的初始值是不确定的。
```

## 表达式

- 拥有运算符的式子就叫做表达式。
- `=`是赋值运算符。

例如：

```
price = 0;

change = 100 - price;
```

## 变量类型

例子：

```
int price = 0;

printf("请输入金额（元）：");
scanf("%d", &price);

int change = 100 -price;

printf("找您%d元。\n", change);
```

这里定义了一个变量。变量的名字是price，类型是int，初始值为0。

C是一种有类型的语言，所有的变量s在使用之前必须**定义**或**声明**，所有的变量必须具有确定的数据类型。

数据类型表示在变量中可以存放什么样的数据，变量中只能存放指定类型的数据。

**程序在运行过程中不能改变变量的类型**。

## 第二个变量

还是上面那个例子，我们来看第二个变量`change`。

注：以下是C99的写法（C99允许变量第一次被使用之前，在程序的任何位置被定义。ANSI C只能在代码开头的地方定义变量）。

`int change = 100 - price;`

这里定义了第二个变量`change`，并且做了计算。

以下是ANSI C的写法：

```
int price = 0;
int change = 0;

printf("......
...
change = 100 -price;

printf("......
...
```

