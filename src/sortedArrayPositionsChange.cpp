/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int l = -1, h = -1, i;
	if (Arr != NULL && len >= 0)
	{
		for (i = 0; i < len - 1; i++)
			if (Arr[i] > Arr[i + 1]){
				l = i;
				break;
			}
		for (i = len - 1; i > 0; i--)
			if (Arr[i] < Arr[i - 1]){
				h = i;
				break;
			}
		if (h != -1){
			i = Arr[h];
			Arr[h] = Arr[l];
			Arr[l] = i;
		}
	}
	else
		return NULL;
}