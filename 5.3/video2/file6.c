//  file6.c
//  正序分解整数
//  输入一个非负整数，正序输出它的每一位数字
//  输入：13425
//  输出：1 3 4 2 5
//
//  接下来的目标是让程序生成mask，不需要我们自行设定它的值
#include <stdio.h>
int main()
{
    int x;
    
    scanf("%d", &x);
    //  x = 1;
    int mask = 1;
    int t =x;
    while ( t>9 ) {
        t /= 10;
        mask *=10;
    }
    printf("mask=%d, mask=%d\n", x, mask);

    do {
        int d = x /mask;
        printf("%d", d);
        if ( mask > 9 ) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while ( mask > 0 );
    printf("\n");
    return 0;
}

/*
输入13425时，程序输出如下
mask=13425, mask=10000
1 3 4 2 5
*/
