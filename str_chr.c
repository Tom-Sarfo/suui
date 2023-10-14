#include "shell.h"

/**
 * str_chr - a function that returns the first occurance of a char
 * @s: a pointer
 * @c: a character in a string
 * Return: a pointer s or NULL
 */

char *str_chr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

