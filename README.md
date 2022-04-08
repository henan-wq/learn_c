# About this repository

For the record only: Course notes and reading notes related to the C language.

## 调试程序：

生成用于调试的程序：`gcc -gstabs -o file1 file1.c`

gdb命令：
```
进入gdb后，使用快捷键 c-x-a 进入TUI模式
list<--每次使用都会显示程序剩下的部分代码
键盘方向键可以在tui显示的程序代码中上下滚动

增加断点：
break main
break <行号数字>

清除断点：
clear <行号数字>

下一步：
next

run
quit
```

查看后台运行命令：`jobs -l`

带[1]的后台运行，我可以用命令`fg 1`将其移到前台运行。

```
