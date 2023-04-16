#include <stdio.h>
/**
 * main - this function prints the arguments it receives
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	printf("%s\n", argv[index]);

	return (0);
}
