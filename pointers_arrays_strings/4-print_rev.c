#include "main.h"

/**
 * _print_rev(char *s) prints a string, followed by a new line
 * @str: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count, i;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (i = count -1 ; i >= 0; i--)
	{	_putchar(s[i]);
	}
	_putchar('\n');
}
