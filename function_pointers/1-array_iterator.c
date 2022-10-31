#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @array: array(integer)
 * @size: size of array
 * @action: pointer of function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action)
	{
		if (array)

			for (i = 0; i < size; i++)
		{
			(action)(*array);
			array++;
		}
	}
}
