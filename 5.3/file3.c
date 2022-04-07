#include <stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0;
	// int sign = 1;
	double sign = 1.0;

	// scanf("%d", &n);
	n = 1000;
	for ( i = 1; i<=n; i++ ) {
		sum += sign/i;
		sign = -sign;
	}

	printf("f(%d)=%f\n", n, sum);

	return 0;
}
