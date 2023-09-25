#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is save
 * @src: memory where is copied to
 * *@n: number of bytes involved
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; r++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

