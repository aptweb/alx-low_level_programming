#include "main.h"

/**
 * swap_int - function with two int type pointer argument
 * @a:  argument int type
 * @b:  argument int type
 *
 *  Using pointer to change value of a and b
 * Return
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
