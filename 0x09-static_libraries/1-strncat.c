#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes
 *
 * @dest: first string
 * @src: second string
 * @n: n bytes from src
 * Return: resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int strg_dest, i;

	for (strg_dest = 0; dest[strg_dest] != '\0'; strg_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[strg_dest + i] = src[i];
	}

	return (dest);
}
