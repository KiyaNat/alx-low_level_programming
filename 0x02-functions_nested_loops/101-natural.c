#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
