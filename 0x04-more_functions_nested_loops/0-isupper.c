#include "main.h"
/**
 * _isupper - Entry point, check uppercase
 * @c: the character it receives
 * Return: 1 if true otherwise 0 if false
 */
int _isupper(int c)
{
	char ch1, ch2;

	ch1 = 'A';
	ch2 = 'Z';

	if (c <= ch2 && c >= ch1)
		return (1);
	else
		return (0);
}
