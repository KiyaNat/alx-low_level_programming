#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 */
void puts_half(char *str)

{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
