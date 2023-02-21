#include "main.h"

/**
 * _isalpha - function that check for alphabets
 *
 * @c: parameter to be check
 *
 * Return: 1 if it an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
