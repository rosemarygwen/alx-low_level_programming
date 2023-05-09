#include "main.h"

/**
 * create_file - Creates a fil and fills it with text
 * @filename: A pointer to the name of the file to create.
 * @text_content: text to write to the file.
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (t = 0; text_content[t];)
			t++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, t);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
