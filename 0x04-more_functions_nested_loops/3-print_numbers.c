#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks for a digit (0 through 9).
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;0

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar(10);
}
