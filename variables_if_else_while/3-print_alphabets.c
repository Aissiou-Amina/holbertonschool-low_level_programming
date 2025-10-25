#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);      /* 1ère fois */

    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);      /* 2ème fois */

    putchar('\n');        /* 3ème fois */

    return (0);
}
