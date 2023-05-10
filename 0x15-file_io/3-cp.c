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
	*fd1 = open(file_from, O_RDONLY);
	if (*fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(*fd1);
		exit(98);
	}
	*fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(*fd2);
		exit(99);
	}
}
/**
 * close_files - close files descreptors and exits on error
 * @fd1: the file descriptor of the file to close
 * @fd2: the file descriptor of the file to close
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * cp_ - copies file_from to file_to
 * @fd1: file descriptor of the file to copy from
 * @fd2: fike descriptor of the file to copy to
 */
void cp_(int fd1, int fd2)
{
	ssize_t r, w;
	char buffer[1024];

	while ((r = read(fd1, buffer, 1024)) != 0)
	{
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd2);
			close(fd2);
			exit(99);
		}
		if (w != r)
			exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd1);
		close(fd1);
		exit(98);
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
	int fd1 = -1, fd2 = -1;
	const char *file_from = av[1], *file_to = av[2];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_file(file_from, file_to, &fd1, &fd2);
	cp_(fd1, fd2);
	close_files(fd1, fd2);
	return (0);
}
