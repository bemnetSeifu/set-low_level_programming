#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the number of characters in s, not counting the null byte
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);

