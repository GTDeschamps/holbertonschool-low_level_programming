#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/**
 *append_text_to_file - Entry point
 *@filename: name of the file
 *@text_content: content of file
 *Return: integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descript;
	ssize_t text_len;
	ssize_t bytes_wrt;

	if (filename == NULL)
		return (-1);

	descript = open(filename, O_WRONLY | O_APPEND);
	if (descript == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		bytes_wrt = write(descript, text_content, text_len);
		if (bytes_wrt != text_len)
		{
			close(descript);
			return (-1);
		}
	}
	close(descript);
	return (1);
}
