#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : char
 * @src : char
 * Return : returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest;
	char *src;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
