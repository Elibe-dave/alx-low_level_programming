#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to modify
 * @index: index of the bit to clear (0-indexed from right)
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
/*
 * check if the bit index is within the range of unsigned long int
 */
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
