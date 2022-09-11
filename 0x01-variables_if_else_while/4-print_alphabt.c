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
	char mimi, e, q;

	e = 'e';
	q = 'q';
	for (mimi = 'a'; mimi <= 'z'; mimi++)
	{
		if (mimi != e && mimi != q)
			putchar(mimi);
	}
	printf("\n");
	return (0);
}
