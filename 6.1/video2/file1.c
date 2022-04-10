#include <stdio.h>

int main()
{
    printf("sizeof(char)=%ld\n", sizeof(char));
    printf("sizeof(short)=%ld\n", sizeof(short));
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(long)=%ld\n", sizeof(long));
    printf("sizeof(long long)%ld\n", sizeof(long long));
    return 0;
}
/*
输出结果如下：
sizeof(char)=1
sizeof(short)=2
sizeof(int)=4
sizeof(long)=8
sizeof(long long)8

而使用32位编译后输出结果如下：
sizeof(char)=1
sizeof(short)=2
sizeof(int)=4
sizeof(long)=4
sizeof(long long)8

当使用命令<gcc file1.c -o file1-32 -m32>编译程序，出现以下报错信息时：

"
In file included from file1.c:1:0:
/usr/include/stdio.h:27:10: fatal error: bits/libc-header-start.h: No such file or directory
 #include <bits/libc-header-start.h>
          ^~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.

shell returned 1
"

可以使用命令<sudo apt-get install build-essential libc6-dev-i386>安装编译32位程序的环境。
*/
