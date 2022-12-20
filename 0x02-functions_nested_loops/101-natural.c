#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)

{
	int countNm = 0;
	int sum = 0;

	while (countNm < 1024)
	{
		if ((counNm % 3) == 0 || (countNm % 5) == 0)
		{
			sum += countNm;
		}
		countNm++;
	}
	printf("%d\n", sum);
	return (0);
}
