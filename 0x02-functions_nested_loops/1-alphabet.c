#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 * Return : 0
 */

void print_alphabet(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		_putchar(z);
		z++;
	}
	_putchar('\n');
}
