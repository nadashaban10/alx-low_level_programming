#include "main.h"
/**
 * divisible - Checks if a number is divisible.
 * @n: The number to be checked.
 * @dividor: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int divisible(int n, int dividor)
{
	if (n % dividor == 0)
		return (0);

	if (dividor == n / 2)
		return (1);

	return (divisible(n, dividor + 1));
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
	int dividor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, dividor));
}
