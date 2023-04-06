#include "main.h"

/**
 * factorial - returns the factorial of nbr 
 * @n: number to return t
 *
 * Return: factorial 
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
