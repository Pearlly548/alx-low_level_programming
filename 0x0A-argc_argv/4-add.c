#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - this program adds only positive numbers
 * @argc: the amount of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int index, m, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (index = 1; index < argc; index++)
		{
			ptr = argv[index];
			length = strlen(ptr);

			for (m = 0; m < length; m++)
			{
				if (isdigit(*(ptr + m)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[index]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
