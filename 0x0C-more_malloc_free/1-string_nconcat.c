#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 * Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *s3;
	unsigned int i, j, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j > n)
		j = n;
	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
		for (m = 0; m < i; m++)
		s3[m] = s1[m];
		for (m = 0; m < j; m++)
			s3[m + i] = s2[m];
		s3[i + j] = '\0';
		return (s3);
}
