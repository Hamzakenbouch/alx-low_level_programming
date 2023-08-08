#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: is the index, starting from 0
 * @n: value to be processed
 * Return: zero or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

x = 1 << index;
if (n & x)
{
return (1);
}
else
{
return (0);
}
}
