//	factorial-for-other.c
#include <stdio.h>
int main()
{
	int n;

	scanf("%d", &n);
	int fact = 1;
	int n_note = n;

	// int i = 1;
	for ( ; n>1; n-- ) {
		fact *= n;
		printf("n=%d, fact=%d\n", n, fact);
	}

	printf("%d!=%d\n", n_note, fact);

	return 0;
}
