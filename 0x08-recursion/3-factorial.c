#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: factor to be factorialise
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
