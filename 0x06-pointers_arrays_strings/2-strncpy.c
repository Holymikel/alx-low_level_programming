#include <stdio.h>
#include <main.h>
/**
 * main - a function that copies a string
 *
 * Return: 0 success
 */
int main(void)
{
	char Src[15] = "alx_africa";
	char Dest[15] = "";

	printf("Before copying\n");
	printf("Source string: %s \n", Src);
	printf("Destination string: %s \n\n", Dest);
	strcpy(Dest, Src);
	printf("After copying\n");
	printf("Source string: %s \n", Src);
	printf("Destination string: %s \n", Dest);
	return (0);
}
