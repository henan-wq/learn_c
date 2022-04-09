//  file3.c
#include <stdio.h>

int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a+1.0)=%ld\n", sizeof(a+1.0));
    printf("sizeof(double)=%ld\n", sizeof(double));
    return 0;
}
/*
输出结果（字节）：
sizeof(int)=4
sizeof(a+1.0)=8
sizeof(double)=8
*/
