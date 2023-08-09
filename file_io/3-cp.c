#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

/**
 * print_error - Entry point
 * main - Programme Principal
 * @message: content of file
 * @filename: name of file
 *
 * Return: Void
 */

void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
}

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int descript_from;
	int descript_to;
	int nb; /*nb: nombre de caratère dans le fichier*/
	char buffer[1024];

	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	descript_from = open(file_from, O_RDONLY);
	if (descript_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	descript_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (descript_to == -1)
	{
		print_error("Error: Can't write to %s\n", file_to);
		close(descript_from);
		exit(99);
	}

	while (nb > 0)
	{
		nb = read(descript_from, buffer, 1024);
		write(descript_to, buffer, nb);
	}
	close(descript_from);
	close(descript_to);

	return (0);
}


