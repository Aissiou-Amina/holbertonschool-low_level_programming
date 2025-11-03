#include"main.h"
/**
 * print_most_numbers - that prints the numbers
 * @void - form 0 to 9
 * Return: Always 0 (Sucess)
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n != '2' && n != '4')
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
