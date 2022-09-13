#include <main.h>

/**
 * main - This program that prints _putchar, followed by a new line.
 *
 * Return: 0 (success)
 */

int main(void)
{
	Char i = "_putcha";

	while (i)
	{
		putchar(i);
		i++;
	}
	printf("\n");
	return (0);
}
