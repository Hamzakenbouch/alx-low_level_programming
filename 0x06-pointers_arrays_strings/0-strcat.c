#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : char
 * @src : char
 * return : returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;
	char *src;

	strcat((*dest), (*src));

	return (dest);
}
