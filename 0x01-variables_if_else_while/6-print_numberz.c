#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - this program prints all the single digits less than 10
 *
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int m;

	for (m = 0 ; m <= 9 ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
