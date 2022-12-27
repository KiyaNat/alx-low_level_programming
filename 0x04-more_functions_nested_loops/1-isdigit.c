#include "main.h"
/**
 * _isdigit - checck the number whether digit or not
 * @c: the number to check
 * Return: 1 if it is digit or 0 for not digit
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
