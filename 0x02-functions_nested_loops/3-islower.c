#include "main.h"
/**
 * _islower - Entry point, check lowercase
 * @c: the character it receives
 * Return: 1 if true otherwise 0 if false
 */
int _islower(int c)
{
	char check, ch1, ch2;

	ch1 = 'a';
	ch2 = 'z';

	if (check <= ch2 && check >= ch1)
		return (1);
	else
		return (0);
}