//	prime-50-while.c
#include <stdio.h>
int main()
{
	int x;
	int cnt = 0;			/* 计数器 */
	// scanf("%d", &x);
	
	// for ( x=1; cnt<50; x++ ) {	/* cnt计数满50次即可结束循环 */
		
	x = 1;
	while ( cnt < 50) {
		int i ;
		int isPrime = 1;	/* x是素数？ */
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;		/* 一旦有一次isPrime = 0，就可以break跳出循环 */
			}
		}
		if ( isPrime == 1 ) {
			cnt ++;		/* 计数器开始计数 */
			printf("%d\t", x);	/* 反斜杠t用于对齐输出结果 */

			if ( cnt %5 == 0 ) {
				printf("\n");	/* 当程序每输出五个素数后，便会打印一次换行符号 */
			}

		}
		x++;
	}

	return 0;
}
