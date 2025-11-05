#include "main.h"

/**
 *_memset_function that fills memory with a constant byte
 *@s -the pointer
 *@b _the constant byte
 *@n -the variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
		i++;
	}
		return (s);
}
