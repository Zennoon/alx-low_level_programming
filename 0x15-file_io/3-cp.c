#include "main.h"

/**
 * read_and_write - Reads from one file and writes to the other (copying)
 * @fd_from: File descriptor of the file being copied from
 * @fd_to: File descriptor of the file copied to
 * @from: Name of the file being copied from
 * @to: Name of the file being copied to
 *
 * Return: void
 */
void read_and_write(int fd_from, int fd_to, const char *from, const char *to)
{
	int read_chars = 1024, err = STDERR_FILENO;
	char *buffer = malloc(read_chars);

	while (buffer != NULL && read_chars == 1024)
	{
		read_chars = read(fd_from, buffer, 1024);
		if (read_chars == -1)
		{
			dprintf(err, "Error: Can't read from file %s\n", from);
			exit(98);
		}
		if (write(fd_to, buffer, read_chars) == -1)
		{
			dprintf(err, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	free(buffer);
}

/**
 * copy_text - Receives two file names and copies content of one to the other
 * @from: Name of the file being copied from
 * @to: Name of the file being copied to
 *
 * Return: void
 */
void copy_text(const char *from, const char *to)
{
	int fd_from, fd_to, err = STDERR_FILENO;

	if (from == NULL || to == NULL)
	{
		exit(98);
	}
	fd_from = open(from, O_RDONLY);
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_from == -1)
	{
		dprintf(err, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(err, "Error: Can't write to %s\n", to);
		exit(99);
	}
	read_and_write(fd_from, fd_to, from, to);
	if (close(fd_from) == -1)
	{
		dprintf(err, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(err, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: 0 if successful, an exit status of 97 otherwise
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text(av[1], av[2]);
	return (0);
}
