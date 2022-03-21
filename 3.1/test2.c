#include <stdio.h>

int main()
{
	int a = 0;		/* 变量a初始值为0 */
	
	printf("%d\n", 7>=3+4);	/* 因为7大于或等于3+4为真，所以打印1 */
	
	int r = a>0;		/* 因为a的值是0，不满足a大于0，所以r的值为0 */
	printf("%d\n", r);	/* 打印0 */

	return 0;
}
