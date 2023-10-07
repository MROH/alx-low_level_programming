#include"main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b:bytes allocated
 * Return: pointer and 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
