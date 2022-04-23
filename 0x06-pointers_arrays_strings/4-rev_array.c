#include <stdio.h>
/**
 *reverse_array - reverses an array of integers
 *@a: integer pointer
 *@n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int m = n / 2;

	for (i = 0; i <= m && n > 1; i++)
	{
		int temp = *(a + i);

		*(a + i) = *(a + (n - i - 1));
		*(a + (n - 1 - i)) = temp;
	}
}
