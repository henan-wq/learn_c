//  file2.c
#include <stdio.h>

int main()
{
    char c =  012;
    int i = 0x12;
    printf("c=%d,i=%d\n", c, i);
    return 0;
}
/*
c=10,i=18
*/
// 如果我们想让printf输出8进制那就用%o，十六进制就用%x
