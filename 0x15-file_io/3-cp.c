#include "main.h"
#include <stdio.h>


/**
 * file_error - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 *
 * Return: void
 */
void file_error(int fileFrom, int fileTo, char *argv[])
{
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo, err_close;
	ssize_t n_characters, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fileFrom = open(argv[1], O_RDONLY);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(fileFrom, fileTo, argv);

	n_characters = 1024;
	while (n_characters == 1024)
	{
		n_characters = read(fileFrom, buf, 1024);
		if (n_characters == -1)
			file_error(-1, 0, argv);
		nwr = write(fileTo, buf, n_characters);
		if (nwr == -1)
			file_error(0, -1, argv);
	}

	err_close = close(fileFrom);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}

	err_close = close(fileTo);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}

	return (0);
}
