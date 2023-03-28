#include "main.h"

/**
 * print_rev - function with 1 argument
 * @s: char type
 *
 * function that prints a string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	
	while (i--)
	{
		_putchar(s[i]);
		
	};
	_putchar('\n');
}
