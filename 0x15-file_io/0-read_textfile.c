#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The name of the file
 * @letters: numbers of letters to  be printed.
 *
 * Return: numbers of letters printed and if it fails it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t nrd, nwr;
	char *b;

	if (filename == NULL)
		return (0);

	fdes = open(filename, O_RDONLY);

	if (fdes == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nrd = read(fdes, b, letters);
	nwr = write(STDOUT_FILENO, b, nrd);

	close(fdes);

	free(b);

	return (nwr);
}
