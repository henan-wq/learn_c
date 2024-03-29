//  file5.c
//  正序分解整数
//  输入一个非负整数，正序输出它的每一位数字
//  输入：13425
//  输出：1 3 4 2 5
#include <stdio.h>
int main()
{
    int x;
    
    //  scanf("%d", &x);
    x = 70000;
    int mask = 10000;
    do {
        int d = x /mask;
        printf("%d", d);
        if ( mask > 9 ) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
        //  printf("x=%d,mask=%d,d=%d\n", x, mask, d);
    } while ( mask > 0 );   /* 因为70000经过循环后，x=0，但mask */
    printf("\n");           /* 却不等于0，所以可以用mask作为循环*/
    return 0;               /* 条件来使用。*/
}

/*
该程序输出如下：
7 0 0 0 0
*/
