#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * 
 */
typedef struct buffer
{
	char *alm;
	int pos;
} buf;

int _printf(const char *format, ...);

int conv(char *p, va_list lista);
int printchar(buf *toprint, char c);
int printString(buf *toprint, char *s);
int printInt(buf *toprint, int num);
int printDec(buf *toprint, int num);
int printBin(buf *toprint, unsigned int num);
int printU(buf *toprint, unsigned int num);
int printO(buf *toprint, unsigned int num);
int printHex(buf *toprint, unsigned int num);
int printHEX(buf *toprint, unsigned int num);

void sendbuf(buf *toprint, char c);
char *createBuf();



int _strlen(char *s);
#endif

