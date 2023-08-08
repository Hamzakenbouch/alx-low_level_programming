#include <stdio.h>
#include "main.h"
/**
 * clear_bit - ffunction that sets the value of a bit to 0 at a given index
 * @n: number to derive representation
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
x = 1 << index;
*n &= ~x;

return (1);
}
