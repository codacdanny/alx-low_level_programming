#include "main.h"
/**
 * _isalpha - checks for the capital and lowercase letters
 * @c: character
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

