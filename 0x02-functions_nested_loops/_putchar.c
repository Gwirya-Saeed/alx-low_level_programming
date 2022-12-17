#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to be printed
 * Return: on success 1.
 * On error, -1 is returned, and error os set
 * appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1)); }
