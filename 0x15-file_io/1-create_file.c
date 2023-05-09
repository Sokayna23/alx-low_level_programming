#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the string to write to the file
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int txt;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		close(file);
		return (-1);
	}
	if (text_content)
	{
		txt = write(file, text_content, strlen(text_content));
		if (txt == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
