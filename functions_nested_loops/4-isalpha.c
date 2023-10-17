#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - Tells you if is a charater,upper or lower
 *
 *@c: stores return from is lower , 1 for lower
 *Return: c value
 */
int _isalpha(int c)
{

	if ((isupper(c) || islower(c)) && isalpha(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
