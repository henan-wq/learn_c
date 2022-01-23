// 练习1-15 重新编写1.2节中的温度转换程序，使用函数实现温度转换计算。
#include <stdio.h>

int temper(int m);

main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%5d %5d\n", fahr, temper(fahr));
    return 0;
}

int temper(int base)
{
    int celsius;

    celsius = 5 * (base-32) / 9;
    return celsius;
}
// 终于只用一次编译就完成了练习