#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the characher to print 
 * Return: on Success is 1
 * On error, -1 is returned, and errno is set appropriateely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
