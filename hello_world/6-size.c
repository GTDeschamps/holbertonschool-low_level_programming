#include <stdio.h>

/**
 *main - Entry point
 *Print the size of various types based
 *on the computer it is compilated
 *and run on
 *Return : always 0
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int:%zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
