#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using an inputed number of byte
 * if the length of the source string is less than the  maximum byte number,
 * the remainder of the destination string is filed with null bytes
 * works identically to the  standard library function 'strncpy'
 * @dest: buffer storing string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
