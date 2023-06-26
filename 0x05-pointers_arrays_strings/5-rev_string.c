#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s:  the string pointedto by 's'
 * Return:  the number of bytes in the stringpointed to by s.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * rev_string - reverses a string
 * @s:  the string pointedto by 's'
 */
void rev_string(char *s)
{
	int last;
	int start;
	char swap;

	last = _strlen(s) - 1;
	start = 0;
	while (start <= last)
	{
		swap = s[start];
		s[start] = s[last];
		s[last] = swap;
		last--;
		start++;
	}
}
