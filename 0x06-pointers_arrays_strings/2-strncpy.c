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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
