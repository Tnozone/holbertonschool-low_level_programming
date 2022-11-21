#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: number of letters to read
 * Return: number of letters, or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd;
	char text[letters];

	if (filename == NULL)
		return (0);

	rd = open(filename, O_RDONLY);

	if (rd == -1)
		return (0);

	read(rd, text, letters);

	close(rd);

	return (letters);
}
