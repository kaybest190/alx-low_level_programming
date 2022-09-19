#include "main.h"
#include <stdio>

/**
 * _puts - puts to stdout
 * @str: params
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
