#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char o;
	int p;

	p = 1;

	while (p <= 10)
	{
		o = 'a';
		while (o <= 'z')
		{
			_putchar(o);
			o++;
		}
		_putchar('\n');
		p++;
	}
}
