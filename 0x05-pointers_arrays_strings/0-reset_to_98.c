#include "main.h"

/**
 * reset_to_98 - a pointer to an int as parameter and updates
 * the value it points to to 98
 * @n: the value of a dereferencing pointer
 *
 * Return: n
 */
void reset_to_98(int *n)
{
	*n = 98;
}