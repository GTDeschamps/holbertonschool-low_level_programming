#include <string.h>
/**
 *leet - Entry point
 *@str: string
 *Return: string
 */

char *leet(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
	switch (str[i])
		{
		case 'a':
		case 'A':
			str[i] = '4';
			break;
		case 'e':
		case 'E':
			str[i] = '3';
			break;
		case 'i':
		case 'I':
			str[i] = '1';
			break;
		case 'o':
		case 'O':
			str[i] = '0';
			break;
		case 's':
		case 'S':
			str[i] = '5';
			break;
		case 't':
		case 'T':
			str[i] = '7';
			break;
		default:
			break;
		}
	}
	return (str);
}
