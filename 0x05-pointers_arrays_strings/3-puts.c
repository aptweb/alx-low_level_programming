#include "main.h"

/**
 * _puts - function with one argument
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
