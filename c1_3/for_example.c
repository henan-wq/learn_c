#include <stdio.h>
/* 打印华氏温度——摄氏温度对照表 */
main()
{
    int fahr;

    for (fahr=0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
// 这个程序去掉了大部分的变量，只用了fahr这个变量，printf的第三个参数是计算摄氏度的表达式。
// c语言的通用规则：在允许使用某种类型变量值的任何场合，都可以使用更复杂的表达式。

// 进入循环前执行一次：fahr=0
// 第二部分fahr <= 300，循环控制对该条件求值，如果结果为真，则执行循环体，此后执行fahr = fahr +20
// 循环控制对该条件求值，如果……
// 循环控制对该条件求值，如果…结果为假，停止执行。