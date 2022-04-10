#include <stdio.h>

int main()
{
    char c = 255;
    int i = 255;
    printf("char=%ld,int=%ld\n", sizeof(char), sizeof(int));
    printf("c=%d, i=%d\n", c, i);

    return 0;
}
/*
输出结果如下：
char=1,int=4
c=-1, i=255

因为一个字节是8位，所以char是8位，int是32位
char:0000 0000
int:0000 0000 0000 0000 0000 0000 0000 0000
当赋值变量c为十进制255时，因为255的二进制为1111 1111，该值与
-1的二进制相同。

而变量i的类型是int，因为数位充足，所以它的二进制为：
0000 0000 0000 0000 0000 0000 1111 1111
*/
