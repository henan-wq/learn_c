#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	/* 这里用到2.2/README.md中到的第一种方法，
	 * 分别减的方法会出现分钟借位的情况，得到
	 * 负数的分钟数……
	 *
	 *
	 * 新的方法是用到判断if，如果检测到分钟是负数，
	 * 就给它增加60，同时给小时数-1
	 */
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if ( im <0 ) {
		im = 60 + im;
		ih --;
	}

	printf("时间差是%d小时%d分。\n", ih, im);

	return 0;
}
