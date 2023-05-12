#include "main.h"

/**
 * close_error - prints an error message if the file
 * descriptor couldn't be closed
 * @fd: the file descriptor of the file to close
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: array of the arguments
 * Return: Always 0 (Success).
 */
int main(int ac, char *av[])
{
	int fd1, fd2, r, w;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	r = read(fd1, buffer, 1024);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (fd1 == 1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (fd2 == -1 || w == -1)
		{

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		r = read(fd1, buffer, 1024);
		fd2 = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	if (close(fd1) == -1)
		close_error(fd1);
	if (close(fd2) == -1)
		close_error(fd2);
	return (0);
}
