#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digits all base 10
 * Return: Alway 0
 */
int main(void)

{
	int num2;

	for (num2 = 0; num2 < 10; num2++)
		putchar((num2 % 10) + '0');
	putchar('\n');
	return (0);
}
