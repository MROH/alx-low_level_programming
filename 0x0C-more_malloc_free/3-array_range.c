#include"main.h"

/**
 * array_range - creates an array of intgers
 * @min:first intger
 * @max:last intger
 * Return:pointer
 */
int *array_range(int min, int max)
{
	int i, arr;
	int *ptr;

	if (min > max)
		return (NULL);
	arr = max - min + 1;
	ptr = malloc(sizeof(int) * arr);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < arr; i++)
		ptr[i] = min++;
	return (ptr);
}
