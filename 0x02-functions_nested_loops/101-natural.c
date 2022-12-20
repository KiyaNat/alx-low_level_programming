#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	int countNm;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (countNm = 0; countNm < 50; countNm++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (countNm == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
