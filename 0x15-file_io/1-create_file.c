#include "main.h"

/**
 * _strlen - Returns the length of a null terminated string
 * @str: The string whose length is returned
 *
 * Return: The length of str
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str != NULL && *str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * create_file - Creates a new file with a given name and writes content to it
 * @filename: The name to give the new file
 * @text_content: The text to write to the new file
 *
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	int success = -1;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd != -1)
		{
			written = write(fd, text_content,
					_strlen(text_content));
			if (written != -1)
			{
				success = 1;
			}
			close(fd);
		}
	}
	return (success);
}
