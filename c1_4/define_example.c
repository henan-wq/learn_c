#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* 温度转换表 */
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
// 符号常量不需要出现在声明中，通常用大写字母，记住#define指令行的末尾没有分号“；”