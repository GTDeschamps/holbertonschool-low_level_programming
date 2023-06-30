#include <string.h>
/**
 *leet - Entry point
 *@str: string
 *Return: string
 */

char *leet(char *str)
{
	const char *letters = "aAeEoOtTlL";
	const char *leetChars = "4433707711";

	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		int j = 0;

		while (letters[j] && str[i] != letters[j])
		{
			j++;
		}
		if (letters[j])
		{
			str[i] = leetChars[j];
		}
	}
	return (str);
}
