#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: 
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;
	

	while (src[i] != '/0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
