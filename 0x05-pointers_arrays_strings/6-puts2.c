#include "main.h"
/**
 * puts2 - function should print only one character 
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i;
	int x =0;
	int n = 0;
	char *y = str;
	while (*y != '\0')
	{
		y++;
		n++;
	}
	x = n - 1;
	for (i = 0 ; i <= x ; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');

}
