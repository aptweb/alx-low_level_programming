#include "main.h"

/**
 * _strlen - function with 1 argument
 * @s: char 
 *
 * Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
