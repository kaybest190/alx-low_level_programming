#include "main.h"
#include <stdio.h>

/**
 * _puts - puts to stdout
 * @str: params
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
