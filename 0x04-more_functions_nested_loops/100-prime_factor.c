#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)

{
	long x, maxf;
	long num = 612852475143;
	double sqrnum = sqrt(num);

	for (x = 1; x <= sqrnum; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
