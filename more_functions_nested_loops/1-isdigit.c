#include "main.h"
#include <stdio.h>
/**
*_isdigit- Determines if c is upper case
*
*@c: value to detect if is a digit
*
*Return: c value 1 for  0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
