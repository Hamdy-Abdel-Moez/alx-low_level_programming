#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to check its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
