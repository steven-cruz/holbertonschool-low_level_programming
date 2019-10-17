#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: width
 * @av: height
 * Return: 1)  NULL if ac == 0 or av == NULL
 *         2)  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int k = 0, len = 0, j = 0, i = 0;
	char *a;

	if (ac <= 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		len = len + j + 1;
	}
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
