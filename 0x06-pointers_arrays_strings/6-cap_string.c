#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - change
 * @k: take a pointer, string.
 * Return: k
 */
char *cap_string(char *k)
{
	int i;

	for (i = 0; k[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (k[i] >= 96 && k[i] <= 123)
			{
				k[i] = k[i] - 32;
			}
		}
		if (k[i] == ' ' || k[i] == '\t' || k[i] == '\n' || k[i] == ','
		    || k[i] == ';' || k[i] == '.' || k[i] == '!' || k[i] == '?'
		    || k[i] == '"' || k[i] == '(' || k[i] == ')' || k[i] == '{'
		    || k[i] == '}')
		{
			i++;
			if (k[i] == ' ' || k[i] == '\n')
			{
				i++;
			}
			if (k[i] >= 96 && k[i] <= 123)
			{
				k[i] = k[i] - 32;
			}
		}
	}
	return (k);
}
