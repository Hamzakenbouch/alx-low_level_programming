#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : char
 * @src : char
 *
 * return : returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

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

	return (a);
}
