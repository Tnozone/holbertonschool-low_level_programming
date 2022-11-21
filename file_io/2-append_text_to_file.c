#include "main.h"

/**
 * append_text_to_file - appends text at the end of a fil
 * @filename: file to append
 * @text_content: text to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, x;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x] != '\0'; x++
				;
	}

	op = open(filename, O_WRONLY | O_APPEND)
	wr = write(op, text_content, x)

	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);
}
