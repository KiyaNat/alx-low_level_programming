#include "main.h"
/**
 * jack_bauer - print the last digit of a number
 * Return: Always 0
 */
void jack_bauer(void)

{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 50; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
