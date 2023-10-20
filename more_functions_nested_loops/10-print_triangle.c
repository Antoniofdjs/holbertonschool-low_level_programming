#include "main.h"
#include <stdio.h>
/**
*print_triangle - Prints trianlges with #
*@size: size of the triangle( its boxed in a l*l size)
*/
void print_triangle(int size)
{
	int l, spc, tag;/* l = line, spc = blank spcs, tag = # */

	if (size <= 0)
		_putchar('\n');
	else
		for (l = 1; l <= size; l++)/*Number of lines to print in, makes the box*/
		{
			for (spc = size - l; spc > 0; spc--)/*prints spaces by size -l (line)*/
			{
				_putchar(' ');
			}
			for (tag = 0; tag < l; tag++)/* Prints the # given by the l(line)*/
			{
				_putchar('#');
			}
			_putchar('\n');/*New line at the end of each line*/
		}
}
