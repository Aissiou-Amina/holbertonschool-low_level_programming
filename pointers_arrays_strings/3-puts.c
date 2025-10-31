#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string
 *
 * Return: void
 */               
void _puts(char *str)
{
	int count;
	for (count = 0; str[count]!= '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}
