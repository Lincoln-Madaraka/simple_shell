#include "shell.h"

/**
* _strdup - duplicates string
* @s: string to duplicate
* Return: pointer to string
*/
char *_strdup(const char *s)
{
	char *new;

	size_t len;

	len = _strlen(s);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	_memcpy(new, s, len + 1);
	return (new);
}

/**
* _strlen - determines string length
* @s: string to check length
* Return: pointer to string length
*/
int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
	}
	return (len);
}

/**
* cmp_chars - compares the characters in adelim stri
* @str: pointer string
* @delim: pointer to delimiter string
*
* Return: 1 success 0 otherwise
*/
int cmp_chars(char str[], const char *delim)
{
	unsigned int i, j, k;

	for (i = 0, k = 0; str[i]; i++)
	{
		for (j = 0; delim[j]; j++)
		{
			if (str[i] == delim[j])
			{
				k++;
				break;
			}
		}
	}
	if (i == k)
		return (1);
	return (0);
}

/**
* _strtok -  function breaks a string into a sequence of tokens
* @str: pointer to string
* @delim: pointer to the delimiter string
*
* Return: pointer to next token otherwise null
*/
char *_strtok(char str[], const char *delim)
{
	static char *splitted, *str_end;

	char *str_start;

	unsigned int i, bool;

	if (str != NULL)
	{
		if (cmp_chars(str, delim))
			return (NULL);
		splitted = str;
		i = _strlen(str);
		str_end = &str[i];
	}
	str_start = splitted;
	if (str_start == str_end)
		return (NULL);

	for (bool = 0; *splitted; splitted++)
	{

		if (splitted != str_start)
			if (*splitted && *(splitted - 1) == '\0')
				break;
		for (i = 0; delim[i]; i++)
		{
			if (*splitted == delim[i])
			{
				*splitted = '\0';
				if (splitted == str_start)
					str_start++;
				break;
			}
		}
		if (bool == 0 && *splitted)
			bool = 1;
	}
	if (bool == 0)
		return (NULL);
	return (str_start);
}

/**
* _isdigit - checks if a string contains any string
*
* @s: pointer to string
* Return: 1 if all are dgts otherwise 0
*/
int _isdigit(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
	}
	return (1);
}

