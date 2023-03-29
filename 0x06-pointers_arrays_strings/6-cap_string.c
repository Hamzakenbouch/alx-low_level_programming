#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int b = 0, x;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + b))
	{
		if (*(s + b) >= 'a' && *(s + b) <= 'z')
		{
			if (b == 0)
			*(s + b) -= 'a' - 'A';

			else
			{
				for (x = 0; x <= 12; x++)
				{
					if (a[x] == *(s + b - 1))
					*(s + b) -= 'a' - 'A';
				}
			}
		}
		b++;
	}
	return (s);
}
