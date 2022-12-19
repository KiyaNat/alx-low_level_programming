#include "main.h"
/**
 * print_alphabet  -prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char lowletter;

	for (lowletter = 'a'; lowletter <= 'z'; lowletter++)
		_putchar(lowletter);
	_putchar('\n');
}
