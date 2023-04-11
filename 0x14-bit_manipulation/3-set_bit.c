#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set to 1 (0-indexed from right)
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
/* check if the bit index is within the range of unsigned long int */
return (-1);

unsigned long int mask = (1UL << index);
/* create a mask with a 1 at the bit index */
*n |= mask; /* set the bit at the bit index to 1 */

return (1);
}
