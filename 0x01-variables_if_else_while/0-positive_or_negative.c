#include <stdio.h>

/**
 *main - Prints if the number is positive, negative, or zero
 *Return: 0
 */
int main(void)
{
	int n;

	if (n > 0)
	{
	printf(" %d is positive\n", n);
	}
	else if (n == 0)
	{
	printf(" %d is zero\n", n);
	}
	else if (n < 0)
	{
	printf(" %d is negative\n", n);
	}
	return (0);
}
