#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be measured
 * Return: Nothing
 */
int _strlen_recursion(char *s)

{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}
	return (leng);
}
