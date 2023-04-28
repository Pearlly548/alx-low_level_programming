#include <stdio.h>

void hare(void) __attribute__((constructor));



/**
 * hare - this program prints a new string and execute the main function
 *
 * Returns: nothing
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
