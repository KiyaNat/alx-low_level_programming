#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to print the result
 * Return: Always 0
 */
int print_last_digit(int n)

{
	int lasDig;

	if (n < 0)
	{
		lasDig = (-1 * (n % 10));
		_putchar(lasDig + '0');
		return (lasDig);
	}
	else
	{
		lasDig = (n % 10);
		_putchar(lasDig + '0');
		return (lasDig);
	}
}
