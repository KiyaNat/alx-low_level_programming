#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : number to check
 * Return: 0 or 1
 */
int print_sign(int n)

{
	int chenum;

	if (n > 0)
	{
		chenum = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		chenum = 0;
		_putchar('0');
	}
	else
	{
		chenum = -1;
		_putchar('-');
	}
	return (chenum);
}
