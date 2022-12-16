#include <stdlib.h>
#include <stdio.h>
/**
 * main -  print alphabet in lowercahse
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char las;

	for (las = 'a'; las <= 'z'; las++)
	{
		if (las != 'e' && las != 'q')
			putchar(las);
	}
	putchar('\n');
	return (0);
}
