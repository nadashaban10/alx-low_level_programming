#include "main.h"
#include <string.h>
/**
 *create_file - funtion to creat file
 *@filename: file path
 * @text_content: content
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bts_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
