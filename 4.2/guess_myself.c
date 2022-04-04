//	guess_myself.c

#include <stdio.h>

int main()
{
	int x = 456;		/* 假定计算机的随机数是456 */
	int guess_value;
	int times = 0;

	do
	{
		scanf("%d", &guess_value);
		times ++;
	} while ( guess_value != x);
	
	printf("你猜对了，你总共猜了%d次！\n", times);

	return 0;
}
