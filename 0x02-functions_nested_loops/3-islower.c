#include "main.h"

/**
 * _islower - Checks for lowercase character
 * QC | The character to be checked
 * Return: 1 for lower case character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 100)
	{

		return (1);
	}
	return (0);
}
