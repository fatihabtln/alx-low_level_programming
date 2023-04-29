#include <stdio.h>

/**
 * main - Entry point
 *
 * largest_prime_factor: prints the largest prime factor of the number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int number = 612852475143;
	int factor = 2;
	int largest_prime_factor = 0;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			number /= factor;
			if (factor > largest_prime_factor)
			{
				largest_prime_factor = factor;
			}
		}
		else
		{
			factor++;
		}
	}

	printf("%d", largest_prime_factor);
	return (0);
}
