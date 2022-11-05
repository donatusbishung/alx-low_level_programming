#include "main.h"

/**
 * append_text_to_file - program appends text at the end of a file
 * @text_content: a string to add to the end of the file
 * @filename: a pointer to the file created
 * Return: if the func. fails or filename is NULL - -1.
 * If the file does'nt exist -1.
 * if the user lacks permission for wtiting. otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
