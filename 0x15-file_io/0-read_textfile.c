#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and print
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: - the number of letter in the file to pritn
 * Return: the number of written bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *c;
	ssize_t readl, writel;

	if (filename == NULL)
	{
	return (0);
	}

		x = open(filename, O_RDONLY);
		if (x == -1)
		{
		return (0);
		}

			c = malloc(letters * sizeof(char));
			if (c == NULL)
			{
			close(x);
			return (0);
			}

			readl = read(x, c, letters);
			if (readl == -1)
			{
			close(x);
			free(c);
			return (0);
			}

		writel = write(1, c, readl);
		if (writel == -1 || writel != readl)
		{
		close(x);
		free(c);
		return (0);
		}

	close(x);
	free(c);
	return (writel);
}
