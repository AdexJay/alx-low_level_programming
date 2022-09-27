#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: character string
 * @needle: character string
 * Return: a pointer to the beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
