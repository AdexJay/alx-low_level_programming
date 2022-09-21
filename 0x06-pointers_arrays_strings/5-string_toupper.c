#include "main.h"

/**
 * string_touper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * REturn: address to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[1] -= 32'
				i++;
	}
	return (str);
}
