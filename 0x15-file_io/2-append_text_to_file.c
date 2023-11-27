#include "main.h"

/**
 * _strlen - Returns the length of a given null terminated string
 * @str: The string whose length is returned
 *
 * Return: The length of str (the number of characters (except '\0') in str)
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
 * append_text_to_file - Appends given text to a given file (if it exists)
 * @filename: Name of the file to which the text is appended
 * @text_content: The text to append to filename
 *
 * Return: 1 if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, success = -1;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd != -1)
		{
			if (write(fd, text_content, _strlen(text_content))
			    != -1)
			{
				success = 1;
			}
			close(fd);
		}
	}
	return (success);
}
