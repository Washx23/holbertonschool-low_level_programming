#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array(integer)
 * @size: size of array
 * @action: pointer of function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
	for (i = 0; i < size; i++)
	{
		(action)(*array);
		array++;
	}
	}
}
