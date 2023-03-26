#include <stdio.h>
#include <unistd.h>


/**
 * main - prints exactly and that piece of art is useful
 *
 * Return: always 0 (success)
 */

int main(void)

{
	/*
	 * write - is a function that points to the screen using system call
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
