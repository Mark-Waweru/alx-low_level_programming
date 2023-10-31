#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int nlett;
	int rwr;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);

	if (fdes == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;
		rwr = write(fdes, text_content, nlett);

		if (rwr == -1)
			return (-1);
	}

	close(fdes);

	return (1);
}
