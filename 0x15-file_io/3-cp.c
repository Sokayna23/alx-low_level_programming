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
	const char *file_from = av[1], *file_to = av[2];
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fd1, buffer, 1024)) != 0)
	{
		if (r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	close_err(fd1);
	close_err(fd2);
	return (0);
}
