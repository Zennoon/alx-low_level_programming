#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: The name of the file to be read
 * @letters: The number of letters to read from the file
 *
 * Return: @letters if the expected number of letters is printed, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str = malloc(sizeof(char) * letters);
	ssize_t read_chars = 0, printed_chars = 0;

	if (filename != NULL && str != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			read_chars = read(fd, str, letters);
			if (read_chars != -1)
			{
				printed_chars = write(STDOUT_FILENO, str,
						      read_chars);
			}
			close(fd);
		}
		free(str);
	}
	return (printed_chars);
}
