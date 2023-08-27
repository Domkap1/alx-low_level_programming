#include "main.h"

/**
 * positive_or_negative - Test function for positive or negative
 *
 * @i: The number to be tested
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d\n is negative\n", i);
	else
		printf("%d is positive\n", i);

}

