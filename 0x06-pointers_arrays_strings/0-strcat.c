#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: string to be concatenated upon
 *
 * Return: pointer des
 */
char *_strcat(char *dest, char *src)

{
	int index = 0, d_len = 0;

	while (dest[index++])
		d_len++;
	for (index = 0; src[index]; index++)
		dest[d_len++] = src[index];
	return (dest);
}
