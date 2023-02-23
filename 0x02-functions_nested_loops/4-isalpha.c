#include "main.h"
/**
 * _isalpha - Entry point, check if it is alphabetic
 * @c: the character it receives
 * Return: 1 if true otherwise 0 if false
 */
int _isalpha(int c)
{
	char ch1, ch2;

	ch1 = 'a';
	ch2 = 'z';
	ch3 = 'Z';
	ch4 = 'A';

	if ((c <= ch2 && c >= ch1) || (c <= ch3 && c >= ch4))
		return (1);
	else
		return (0);
}
