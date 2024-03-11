#include "main.h"

/**
 *
 */

char *_strdup(char *str){

	int charsapce;
	int i;
	char *p;

	if(str == NULL) {
		return (NULL);
	}

	for(charspace = 0; str[charsapce] != '\0'; charsapce++){

		p = malloc(sizeof(char)*(charsapce++));

		if (p != NULL) {
			for(i = 0; i<=  charspace; i++) {
				p[i] = str[i];
			}
		}
	}
	return (p);
}
