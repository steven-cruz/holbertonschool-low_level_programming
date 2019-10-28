#include <holberton.h>

/**
 * printChar - send char to sendbuf.
 * @c: ins the character.
 * @toprint: the frish parameter
 * Return: 1.
 */
int printChar(buf *toprint, char c)
{
	sendbuf(toprint, c);
	return (1);
}

/**
 * printString - send the number of string characters.
 * @toprint: the frish parameter
 * @s: is the pointer of the string.
 * Return: contains the number of character in the string.
 */
int printString(buf *toprint, char *s)
{
	int i = 0;

	if (toprint == NULL)
		return (0);

	while (*toprint != '\0')
	{
		sendbuf(toprint, s[i]);
		i++;
	}
	return (i);
}
