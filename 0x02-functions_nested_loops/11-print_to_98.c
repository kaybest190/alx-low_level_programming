#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 * Return: returns nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		scanf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			scanf("%d, ", n);
	scanf("98\n");
}
