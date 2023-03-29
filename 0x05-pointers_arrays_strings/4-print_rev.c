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
	int x;
	while (*s!='\0')
	{
		i++;
		s++;
	}
	s--;
	for(x=i x>0; a--)
	{
		_putchar(s[i]);
		s--;	
	}
	_putchar('\n');
}
