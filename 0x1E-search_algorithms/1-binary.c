#include "search_algos.h"

void print_array(int *, size_t, size_t);
int binary_helper(int *array, int key, size_t l, size_t h);

/**
 * binary_search - searches an array linearly
 * @array: pointer to array
 * @size: size of array
 * @value: key to search
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_helper(array, value, 0, size - 1));
}

/**
 * binary_helper - recursive binary search
 * @array: pointer to array
 * @l: lower index
 * @h: higher index
 * @key: key to search
 * Return: index of key in array or -1
 */
int binary_helper(int *array, int key, size_t l, size_t h)
{
	size_t m;

	if (l > h)
		return (-1);
	print_array(array, l, h);
	m = (l + h) >> 1;
	if (array[m] > key)
		return (binary_helper(array, key, l, m - 1));
	else if (array[m] == key)
		return (m);
	else
		return (binary_helper(array, key, m + 1, h));
}

/**
 * print_array - prints an array
 * @arr: array pointer
 * @l: start
 * @h: stop
 */
void print_array(int *arr, size_t l, size_t h)
{
	printf("Searching in array: ");
	for (; l <= h; l++)
	{
		printf("%d", arr[l]);
		if (l < h)
			printf(", ");
		else
			putchar('\n');
	}
}
