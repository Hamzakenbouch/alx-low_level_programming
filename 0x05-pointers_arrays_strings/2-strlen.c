#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: string to evaluate
 * return : the length of string.
 */

int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != '\0')
	{
		a=a+1;		
	}
	return (a);
}
