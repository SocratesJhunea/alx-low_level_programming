#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

char letter = 'a';
int count = 0;

while (count < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
count++;
}

}
