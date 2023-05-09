#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: the file name
 * @letters: the number of letters 
 * Return: the number of letters, or 0 if the file can not 
 * be opened or read,or if there is no file name, or write fails
 * or doesnt write the expected amout of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, w;
	size_t *buffer;
	
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(size_t) * letters);
	if (!buffer)
		return (0);
	r = read(file, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (r);
}
