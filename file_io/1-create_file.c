#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*create_file - Entry point
*@filename: name of the file
*@text_content: content of file
*Return: size of file
*/

int create_file(const char *filename, char *text_content)
{

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return;
		
}
