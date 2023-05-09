#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: content to append into the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int s, w, t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (t = 0; text_content[t];)
			t++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	w = write(s, text_content, t);

	if (s == -1 || w == -1)
		return (-1);

	close(s);

	return (1);
}
