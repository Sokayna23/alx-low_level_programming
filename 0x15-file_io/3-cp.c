#include "main.h"

/**
 * close_err - handles closing errors
 * @fd: file descriptor
 */
void close_err(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry point
 * @ac: number of arguments
 * @av: a pointer of characters
 * Return: always 0;
 */
int main(int ac, char **av)
{	
	int fd1, fd2, r, w;
	const char *file_from, *file_to;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);
	fd1 = open(file_from, O_RDONLY);
	r = read(fd1, buffer, 1024);
	if (fd1 == -1)
	{
		close(fd1);
		exit(98);
	}
	r = read(fd1, buffer, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file_from %s\n", file_from);
		close_err(fd1);
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close_err(fd2);
	}
	w = write(fd2, buffer, r);
	if (w == -1)
	{
		dprintf(2,"Error: Can't write to file_to %s\n", file_to);
		close_err(fd2);
	}
	close(fd1);
	close(fd2);
	free(buffer);
	return (0);
}
