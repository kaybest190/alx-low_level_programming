#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse something
 * @s: params
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}
