#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start, end;
	char tmp;

	end = 0;
	while (s[end] != '\0')
		end++;
	end--;
	for (start = 0; start < end; start++, end--)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
	}
}
