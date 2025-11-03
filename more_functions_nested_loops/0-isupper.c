#include "main.h"
#include<stdio.h>
/**
 * _isupper - write a function that check for uppercase character
 *@c: write a function that check
 * Return: always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
