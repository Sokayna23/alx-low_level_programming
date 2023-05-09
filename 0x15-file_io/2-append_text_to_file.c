#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file name
 * @text_content: the string to add at the end of the file
 * Return: 1 (Success), -1 (Failure).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int txt;

	file = open(filename, O_WRONLY | O_APPEND, 0664);
	if (!file)
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
