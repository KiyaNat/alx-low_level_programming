#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: arrary input
 * @size: integer input
 */
void print_diagsums(int *a, int size)

{
	int i, n, sum_1 = 0, sum_2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum_1 = sum_1 + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum_2 = sum_2 + a[n];
	printf("%d, %d\n", sum_1, sum_2);
}
