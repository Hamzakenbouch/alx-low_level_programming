#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
