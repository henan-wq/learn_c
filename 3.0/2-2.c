#include <stdio.h>

int main()
{
	int first_time = 0;
	int second_time = 0;

	scanf("%d %d", &first_time, &second_time);
	
	int cal_time = first_time / 100 * 60 + first_time % 100 + second_time;

	printf("%d\n", cal_time / 60 * 100 + cal_time % 60);

	return 0;
}
