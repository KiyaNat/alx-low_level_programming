#include <stdio.h>
/**
 * main - print base 16 numbers in lowercase
 * Return: Always 0
 */
int main(void)

{
	int hex;
	char lo;

	for (hex = 0; hex < 10; hex++)
		putchar((hex % 10) + '0');
	for (lo = 'a'; lo <= 'f'; lo++)
		putchar(lo);
	putchar('\n');
	return (0);
}
