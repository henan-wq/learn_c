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


