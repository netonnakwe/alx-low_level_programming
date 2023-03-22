#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic characters
 * @e: input
 * Return: 1 if e is a letter (both lowercase or uppercase), 0 if otherwise
 */
int _isalpha(int e)
{
	if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
		return (1);
	return (0);
}
