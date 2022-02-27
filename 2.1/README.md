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

## 读整数

```
scanf("%d", &price);
```

`scanf`这个函数读入下一个整数，读到的结果赋值给变量`price`。`"%d"`的双引号就是格式化字符串。

`&price` scanf需要`&`，这部分涉及指针的知识。

`printf`与`scanf`中的`f`是Formatting（格式化）的缩写。

## 常量

```
int change = 100 -price;
```

固定不变的数是常数，如这里的100，

直接写在程序里的常数被称为直接量（literal）。

> 更好的方式是定义一个常量：`const int AMOUNT = 100;`注：这是C99的写法。

## const

const是一个修饰符，加在int的前面用来给这个变量加上const的属性。（这个const的属性表示这个变量值一旦被是初始化就不能被修改。

如果试图修改常量，把它放在赋值运算符的左边，就会被编译器指出错误。

## 多次定义变量

```
#include <stdio.h>

int main()
{
    int amount = 100;		/* 通过程序首次定义变量amount的值	*/
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);

    printf("请输入票面”）；	
    scanf("%d", &amount);	/* 在这里通过输入再次定义变量amount的值 */

    int change = amount - price;

    printf("找您%d元。\n", change);

    return 0;
}
```

## plus.c

```
int a;
int b;

printf("请输入两个整数：");
scanf("%d %d", &a, &b);
printf("%d + %d = %d\n", a, b, a + b);
```

该程序`plus`运行时就算不输入空格，输入第一个数，回车，输入第二个数也是可以的。

