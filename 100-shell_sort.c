#include "sort.h"

/**
* exchange - swaps
* @array: the array
* @a: numbers
* @b: int b to count
* Return: none return
*/
void exchange(int *array, int a, int b)
{
int temp;

temp = array[a];
array[a] = array[b];
array[b] = temp;
}

/**
* less - checks if one number is less than another
* @a: a number
* @b: another number
* Return: pseudo booleanit is either true or false
*/
int less(int a, int b)
{
if (a < b)
return (1);
return (0);
}
/**
* shell_sort - shell sorts
* @array: array
* @size: the size of array
*/
void shell_sort(int *array, size_t size)
{
size_t length = size;
unsigned int x = 1;
unsigned int i, j;
if (!array || size < 2)
return;
while (x < length / 3)
x = 3 * x + 1;
while (x >= 1)
{
for (i = x; i < length; i++)
{
for (j = i; j >= x && less(array[j], array[j - x]); j -= x)
{
exchange(array, j, j - x);
}
}
x /= 3;
print_array(array, size);
}
}
