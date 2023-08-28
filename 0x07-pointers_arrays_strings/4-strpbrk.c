#include "main.h"

/**
 * _strpbrk -  search a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string to be searched from
 *
 * Return: s if byte is found or NULL if it is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
