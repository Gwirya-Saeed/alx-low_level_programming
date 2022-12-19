#include "main.h"

/**
 * puts - prints every other character of a string
 * @str: char to check
 * Return: 0 is success
 */

void puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
