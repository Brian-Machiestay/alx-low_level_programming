#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Function begins here
 *
 *Return:function ends
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positve\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
