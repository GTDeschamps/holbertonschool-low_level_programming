#include"main.h"
#include<stdio.h>
/**
 *main -Entry point
 *@argc: argument
 *@argv: valeur
 *Return: argument
 */

int main(int argc, char *argv[])
{
	int i;

	for ((i = 0); i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
