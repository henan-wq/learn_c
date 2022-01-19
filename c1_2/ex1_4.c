#include <stdio.h>

/* 练习1-4 编写一个程序打印摄氏温度转
换为华氏温度转换表 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%3.0f %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}