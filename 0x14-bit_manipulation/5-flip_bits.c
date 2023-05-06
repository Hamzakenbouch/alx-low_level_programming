#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: one number
 * @m: another number
 * Return: the fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int (p) = 0;
	unsigned long int z = n ^ m;
	while (z != 0)
	{
	if ((z & 1) == 1)
	{
	(p)++;
	}
	z >>= 1;
	}
	return (p);
}
