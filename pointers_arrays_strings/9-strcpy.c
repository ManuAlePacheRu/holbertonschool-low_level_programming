#include "main.h"

/**
 *_strcpy - this function is goig to copy string of a *p to another *p
 *@dest: is the destination of the copied content
 *@src: is the original of the content that is going to be copied
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
dest[i] = '\0';

	return (dest);
}
