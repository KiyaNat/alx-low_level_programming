#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	long int c;
	long int fib1 = 0, fib2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
