#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: input
 */
void puts_half(char *str)
{
int i, n, x;

	x = 0;

	for (i = 0; str[i] != '\0'; i++)
		x++;

	n = (x / 2);

	if ((x % 2) == 1)
		n = ((x + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');		

}	
