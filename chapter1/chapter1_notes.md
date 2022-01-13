# 阅读笔记
## 常用命令
- 创建完ex1.c后，可以通过make ex1命令生成ex1文件；
- 在命令行输入./ex1即可看到文件输出的结果；
- 通过CFLAGS=“-Wall" make ex1命令，可以在生成ex1文件的同时，看见一些警告；
- 通过在ex1.c的第一行补充#include <stdio.h>，可以在之后生成ex1文件时让警告消失。

## 附加题
1. 在你的文本编辑器中打开ex1文件，随机修改或删除一部分，之后运行它看看发生了什么。 答：将int删除后，编译时警告内容如下，
```
ex1.c:2:2: warning: return type defaults to ‘int’ [-Wimplicit-int]
    2 |  main(int argc, char *argv[])
      |  ^~~~
```
提示我返回类型默认为‘int’，同时在main的下方标注默认为int的位置和int的字符数（波浪线）；
通过./ex1，仍可输出正确结果。

删除main，出错：
```
ex1.c:2:6: error: expected identifier or ‘(’ before ‘int’
    2 | int (int argc, char *argv[])
      |      ^~~
make: *** [<builtin>: ex1] Error 1
提示我少了标识符；
```

删除*argv，出错：

```
ex1.c:2:5: warning: second argument of ‘main’ should be ‘char **’ [-Wmain]
    2 | int main(int argc, char [])
      |     ^~~~
ex1.c: In function ‘main’:
ex1.c:2:20: error: parameter name omitted
    2 | int main(int argc, char [])
      |                    ^~~~~~~
make: *** [<builtin>: ex1] Error 1
```
提示我省略了参数名
