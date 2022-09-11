#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - this program prints the alphabets in lowercase
 *
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char mimi;

	for (mimi = 'z'; mimi >= 'a'; mimi--)
	{
		putchar(mimi);
	}
	putchar('\n');
	return (0);
}
