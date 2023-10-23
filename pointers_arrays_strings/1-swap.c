#include "main.h"
/**
 *swap_int - swap pointer variables
 *
 *@a: stores value
 *@b: stores value
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
