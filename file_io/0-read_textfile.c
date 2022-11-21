#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: number of letters to read
 * Return: number of letters, or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *text;

	text = malloc(sizeof(char) * letters);

	if (text == NULL)
		return (0);

	op = open(filename, O_RDONLY);

	rd = read(op, text, letters);
	wr = write(STDOUT_FILENO, text, rd);

	if (op == -1 || rd == -1 || wr != rd)
	{
		free(text);
		return (0);
	}

	close(op);

	return (wr);
}
