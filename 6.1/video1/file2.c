//  file2.c
#include <stdio.h>

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a++));
    printf("sizeof(double)=%ld\n", sizeof(double));
    return 0;
}
/*
输出结果（字节）：
sizeof(int)=4
sizeof(a)=4
sizeof(double)=8
*/
