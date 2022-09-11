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
	int a;
	char mimi;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	for (mimi = 'a' ; mimi <= 'f' ; mimi++)
	{
		putchar(mimi);
	}
	putchar('\n');
	return (0);
}
