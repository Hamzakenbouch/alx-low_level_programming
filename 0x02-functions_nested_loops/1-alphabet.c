#include "main.h"

/**
 * main - print alphabet
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
