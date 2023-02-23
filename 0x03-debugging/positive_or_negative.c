#include "main.h"

/**
 * positive_or_negative - check for negative and positive numbers
 *
 * @i: the number to be check
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
