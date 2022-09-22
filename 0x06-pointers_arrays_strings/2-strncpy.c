#include <main.h>
#include <stdio.h>
/**
 *_strncpy - copies string from source to destination
 *@dest: destination string
 *@src: source string to be copied
 *@n: largest number of bytes to copy
 *Return: destination string concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
