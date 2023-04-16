#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - program minimum number of coins to make change
 * @argc: the amount of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coinConverter(int index)
{
	int count = 0;

	while (index != 0)
	{
		if (index % 10 == 9 || index % 10 == 7)
			index -= 2;
		else if (index % 25 == 0)
			index -= 25;
		else if (index % 10 == 0)
			index -= 10;
		else if (index % 5 == 0)
			index -= 5;
			else if (index % 2 == 0)
		{
			if (index % 10 == 6)
				index -= 1;
			else
				index -= 2;
		}
		else
			index -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int index, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	index = atoi(argv[1]);

	if (index < 0)
		printf("0\n");

	else
	{
		coin = coinConverter(index);

		printf("%d\n", coin);
	}

	return (0);
}

