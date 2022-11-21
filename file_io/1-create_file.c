#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: file content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, x;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x] != '\0'; x++)
			;
		wr = write(op, text_content, x);
	}

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
