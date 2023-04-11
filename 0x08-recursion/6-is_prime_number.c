#include "main.h"
/**
 * check_for_prime - this function checks if the number is prime
 * @a: this is the prime number to be confirmed
 * @b: this checks if the number is actually a prime number
 *
 * Return: returns 1 if true and 0 if false
 */
int check_for_prime(int a, int b)
{
	if ((a % b) == 0)
	{
		if (a == b)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (check_for_prime(a, b + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 0)
		return (0);

	return (check_for_prime(n, 2));
}
