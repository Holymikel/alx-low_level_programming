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

	for (mimi = 'a'; mimi <= 'z'; mimi++)
	putchar(mimi);
	for (mimi = 'A'; mimi <= 'Z'; mimi++)
	putchar(mimi);
	printf("\n");
	return (0);
}
