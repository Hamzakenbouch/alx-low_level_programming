#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t w;
	ssize_t z;
	char *c;

		x = open(filename, O_RDONLY);
		if (x == -1)
		return (0);
	
	c = malloc(sizeof(char) * letters);
	z = read(x, c, letters);
	w = write(STDOUT_FILENO, c, z);

	free(c);
	close(x);
	return (w);
}
