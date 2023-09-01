#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: number of string
 *
 * Return:(0)
 */
int _strlen(char *s)
{
	int compl_len;

	compl_len = 0;

	while (s[compl_len] != '\0')
	{
		compl_len++;
	}

	return (compl_len);
}
