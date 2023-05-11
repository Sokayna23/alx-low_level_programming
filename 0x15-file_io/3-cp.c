#include "main.h"

/**
 * open_file - opens files
 * @file_from: first file
 * @file_to: second file
 * @fd1: file descriptor
 * @fd2: file descreptor
 */
void open_file(const char *file_from, const char *file_to, int *fd1, int *fd2)
{
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	*fd1 = open(file_from, O_RDONLY);
	if (*fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	*fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(*fd1);
		exit(99);
	}
}
/**
 * close_error - prints file descreptor close  error
 * @fd: the file descriptor of the file to close
 */
void close_error(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: the arguments passed to the program
 * Return: always 0;
 */
int main(int ac, char **av)
{
	ssize_t r, w;
	char buffer[1024];
	int fd1 = -1, fd2 = -1;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_file(av[1], av[2], &fd1, &fd2);
	do {
		r = read(fd1, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %d\n", fd1);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd2);
			exit(99);
		}
	} while (r == 1024);
	close_error(fd1);
	close_error(fd2);
	return (0);
}
