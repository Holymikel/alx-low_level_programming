#include <stdio.h>
#include <main.h>
/**
 * _strcat- concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: destination string concatenated
 */
char *_strcat(char dest, char src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
