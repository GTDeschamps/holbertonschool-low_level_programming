#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*read_textfile - Entry point
*@filename: name of the file
*@letters: number of letters in the file
*Return: size of file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t bytesread;
	ssize_t byteswritten;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesread = read(file, buffer, letters);

	if (bytesread <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	close(file);
	free(buffer);

	if (byteswritten == bytesread)
		return (bytesread);
	else
		return (0);
}
