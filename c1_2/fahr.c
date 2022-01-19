#include <stdio.h>

/* 当fahr=0，20，……，300时，分别
打印华氏温度与摄氏温度对照表 */
main()
{
    int fahr, celsius;          /* 在c语言中所有变量都必须先声明后使用，声明通常都被放在函数起始处，在任*/
    int lower, upper, step;     /* 何可执行语句之前，声明用于说明变量的属性，由一个类型名和变量表组成。 */

    lower = 0;      /* 温度表的下限 这些都是赋值语句 */
    upper = 300;    /* 温度表的上限 */
    step = 20;      /* 步长 */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;  /* 整数除法操作将执行舍位，结果中的小数都会被舍弃，这一点要注意 */
        printf("%d\t%d\n", fahr, celsius);  
        fahr = fahr + step;
    }
}

// while 循环语句的循环体可以是用花括号括起来的一条或多条语句，也可以是不用花括号包括的单条语句，例如：
//while (i < j)
//    i = 2 * i;

/* printf是一个通用输出格式化函数。函数的第一个参数是待打印的字符，百分号是参数进行替换的位置，
printf函数并不是c语言本身的一部分，c语言本身没有定义输入/输出功能，printf是标准库函数中一个有用的函数。 */