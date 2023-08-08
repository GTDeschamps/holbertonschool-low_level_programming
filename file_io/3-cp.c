#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024;

/**
 */

void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
}

