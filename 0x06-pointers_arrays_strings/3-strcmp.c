#include <stdio.h>
#include <string.h>
/**
 *_strcmp - a function that compares two strings.
 *@s1: first string expression
 *@s2: second string expression
 *Return: outputs the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
