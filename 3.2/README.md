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

在上面的代码片段中，else总和最近的那个if匹配，它们都被最外面那个if所包括。

接下来我在外面的if后面添加大括弧，也在里面的else前添加大括弧：

```
if ( code == READY ) {
        if ( count <20 )
                printf("一切正常\n");
} else
	printf("继续等待\n");
```

那么，此时else就会在 ` code== READY ` 不被满足的情况下执行，而与` if ( count <20 ) `不再有关系。


