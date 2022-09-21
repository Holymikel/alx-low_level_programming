#include <string.h>
#include <main.h>
/**
 *_strncpy - copies string from source to destination
 *@dest: destination string
 *@src: source string to be copied
 *
 *Return: destination string concatenated
 */

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
