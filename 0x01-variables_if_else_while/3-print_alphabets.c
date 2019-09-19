#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, m;

c = 'a';
m = 'A';

while (c <= 'z')
{
putchar(c);
c = c + 1;
}
while (m <= 'Z')
{
putchar(m);
m = m + 1;
}
putchar('\n');
return (0);
}
