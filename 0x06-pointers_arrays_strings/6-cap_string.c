#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	    int i, j, len;
    char temp;

    len = strlen(str);

    // reverse the entire string
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // reverse each word in the string
    for (i = 0, j = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            // reverse the current word
            for (int k = j, l = i - 1; k < l; k++, l--)
            {
                temp = str[k];
                str[k] = str[l];
                str[l] = temp;
            }

            j = i + 1;
        }
    }

    // reverse the last word in the string
    for (int k = j, l = len - 1; k < l; k++, l--)
    {
        temp = str[k];
        str[k] = str[l];
        str[l] = temp;
    }

    return str;

}
