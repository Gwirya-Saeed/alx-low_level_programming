#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, count;

for (i = 0; dest[i] != '\0';		i++)
	for (count = 0; count < n && src[count] != '\0'; count++)
{
	dest[i] = src[count];
	i++;
}
if (count < n)
	dest[i] = '\0';
	return (dest);
	}
