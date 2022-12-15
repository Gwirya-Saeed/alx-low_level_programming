#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: The character to print
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
