#include "main.h"

/**
 * _strncpy - copies a string, like strncpy
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the number of bytes to write to dest
 *
 * Description: copies at most n bytes of src; if src is shorter than n,
 * the rest of the n bytes of dest are filled with null bytes
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
