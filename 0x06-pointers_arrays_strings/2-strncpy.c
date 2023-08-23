#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: no of string to be copied
 * Return: pointer string (desk)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
