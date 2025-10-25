#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + 48);          /* Affiche le chiffre i (0 → '0', 1 → '1', ...) */
        if (i != 9)
        {
            putchar(',');         /* Affiche la virgule */
            putchar(' ');         /* Affiche l’espace */
        }
    }
    putchar('\n');                /* Saut de ligne à la fin */
    return (0);
}
