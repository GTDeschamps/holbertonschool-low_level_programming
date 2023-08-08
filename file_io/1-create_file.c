#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
*create_file - Entry point
*@filename: name of the file
*@text_content: content of file
*Return: size of file
*/

int create_file(const char *filename, char *text_content)
{
	int descript;
	ssize_t bytes_wrt;

	if (filename == NULL)
		return (-1);


	descript = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (descript == -1)
		return (-1);

	if (text_content == NULL)
	{
		bytes_wrt = write(descript, text_content, strlen(text_content));
		if (bytes_wrt == -1)
		{
			close(descript);
			return (-1);
		}
	}
	close(descript);
	return (1);
}
