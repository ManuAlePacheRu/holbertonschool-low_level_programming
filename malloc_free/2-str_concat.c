char *str_concat(char *s1, char *s2)
{
	char *strres;
	
	if (s1 || s2 == NULL)
	{	
		return (NULL);
	}	
	
	malloc(strres = s1 + s2);

	return (strres);

