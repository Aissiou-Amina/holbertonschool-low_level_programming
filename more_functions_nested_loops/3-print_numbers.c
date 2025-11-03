#include "main.h"
/**
 * print_numbers - function that print the numbers,
 * @void - 0 to 9, followed by a new line
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
