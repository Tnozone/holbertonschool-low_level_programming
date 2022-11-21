#include "main.h"

/**
 * - copies content of one file to another
 * @file_from: file to copy
 * @file_to: file to copy to
 * Return:
 */

int cp(int argc, char *argv[])
{
	int op1, op2, rd, wr, x;

	if (argc != 3)
	{
		fprintf("Usage: cp file_from file_to\n");
		exit(97);
	}

	if (file_from == NULL)
	{
		fprintf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	op1 = open(argv[1], O_RDONLY);

	rd = read(op1, );

	close(op1);

	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	wr = write(op2, ,rd);

	if (wr == -1 | op2 == -1)
	{
		fprintf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(op2);

}
