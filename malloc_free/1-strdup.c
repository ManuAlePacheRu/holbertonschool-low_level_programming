#include "main.h"

/**
 *
 */

char *_strdup(char *str)
{
	int charspace;
	int i;
	char *p;

	if(str == NULL) 
	{
		return (NULL);
	}
	
	for(charspace = 0; str[charspace] != '\0'; charspace++)
	{
		p = malloc(sizeof(char)*(charspace + 1));
		if (p != NULL)
		{
			for(i = 0; i<=  charspace; i++)
			{
				p[i] = str[i];
			}
		}
	return (p);
}
