#include "main.h"

/**
 * create_file - creates a new file
 * @filename: The name of the file we are creating
 * @text_content: The content to be written in the file.
 *
 * Return: 1 if it successeds. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	int nlett;
	int rwr;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdes == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		;

	rwr = write(fdes, text_content, nlett);

	if (rwr == -1)
		return (-1);

	close(fdes);

	return (1);
}
