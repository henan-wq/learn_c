//   # 求最大公约数
//  - 输入两个数a和b，输出它们的最大公约数
//  - 输入：12 18
//  - 输出：6
//  
//  新方法：辗转相除法
//  1. 如果b等于0，计算结束，a就是最大公约数
//  2. 否则，计算a除以b的余数，让a等于b，而b等于
//  那个余数；
//  3. 回到第一步。

/*
a   b   t
12  18  12
18  12  6
12  6   0
6   0
*/
#include <stdio.h>
int main()
{
    int a,b;
    int t;

    //  scanf("%d %d", &a, &b);
    a=12;b=18;
    while ( b != 0 ) {
        t = a % b;
        a = b;
        b = t;
        printf("a=%d,b=%d,t=%d\n", a, b, t);
    }
    printf("gcd=%d\n", a);
    return 0;
}
/*
输出结果如下：
a=18,b=12,t=12
a=12,b=6,t=6
a=6,b=0,t=0
gcd=6
*/
