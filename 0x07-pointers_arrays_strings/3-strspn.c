#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to measure
 * @accept: the bytes allowed in the prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int j;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[count] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
