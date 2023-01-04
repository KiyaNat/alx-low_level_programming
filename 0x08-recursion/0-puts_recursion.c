#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}