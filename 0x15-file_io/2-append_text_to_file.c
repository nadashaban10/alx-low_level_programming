#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function to append text to a file
 * @filename: file path
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bts_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bts_written = write(file, text_content, strlen(text_content));
		if (bts_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
