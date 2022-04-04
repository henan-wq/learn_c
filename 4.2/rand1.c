//	rand_1.c
#include <stdio.h>
#include <stdlib.h>	/* stdlib和time都是为了能在程序中使用rand在写的 */
#include <time.h>

int main()
{
	srand(time(0));	/* srand和rand()也是随机数有关的语句 */
	int a = rand();

	printf("%d\n", a);

	return 0;
}
// 暂时不用细究这些语句的原理，先“用”。
