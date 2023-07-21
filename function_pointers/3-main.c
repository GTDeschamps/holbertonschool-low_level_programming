#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main -Entry point
 * @argc: number of argument
 * @argv: position of argument
 * Return: result of operation
*/
int main(int argc, char **argv)
{
	int num1, num2;
	int result;
	char *symbole;

	if (argc != 4)
	{
		printf("error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	symbole = (argv[2]);

	if (get_op_func(symbole) == NULL || symbole[1] != '\0')
	{
		printf("error");
		exit(99);
	}
	if ((*symbole == ("/" || "*")) && (num2 == 0))
	{
		printf("error");
		exit(100);
	}
	result = get_op_func(symbole)(num1, num2);
	printf("%d\n", result);
	return (0);
}
