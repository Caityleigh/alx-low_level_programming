#include <stdlib.h>
#include "main.h"

/**
 * _strlen - The length of a string.
 *
 * @s: The input char
 *
 * Return: The lenght of a string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}

	return (l);
}

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *con, *tmp;

	if (!s1)
		s1 = "";

	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";

	else
		l2 = _strlen(s2);

	con = malloc(l1 + l2 + 1);

	if (!con)
		return (0);

	tmp = con;

	while (*s1)
		*tmp++ = *s1++;

	while (*s2)
		*tmp++ = *s2++;

	return (con);
}
