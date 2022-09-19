#include "main.h"
#include <stdio.h>

/**
 * puts2 - skips 2
 * @str: string
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');
}
