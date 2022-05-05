#include "main.h"
#include <stdio.h>
/**
 * main -  checks for lowercase character
 * @c: parameter for a character
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
