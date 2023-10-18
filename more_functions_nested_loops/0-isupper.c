#include "main.h"
#include <stdio.h>
/**
*_isupper - Determines if c is upper case
*
*@c: stored value int for comparing if c is upper
*
*Return: c value 1 for upper or 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
