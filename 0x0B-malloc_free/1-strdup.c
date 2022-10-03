#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new allocated
 * space in memory which contains a sopy of the string
 * passed.
 * @str: pointer to the string being duplicated
 *
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + i));

	/* check if malloc was successful */
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
