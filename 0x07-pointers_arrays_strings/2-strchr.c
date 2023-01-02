#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string sourc
 * @c: first occurrence of the character
 */
char *_strchr(char *s, char c)

{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
