#include "main.h"

/**
 * prints_alphabet - prints the alphabets in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
