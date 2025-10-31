#include <string.h>
#include <stdio.h>
#include"main.h"

/**
 * 2-strlen - returns the length of a string.
 * pointer to returns
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

