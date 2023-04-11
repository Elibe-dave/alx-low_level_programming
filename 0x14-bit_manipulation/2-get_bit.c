#include "main.h"

/**
 * get_bit - gets the value of the bit at a specific index
 * @num: the decimal number to search
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index
 * or -1 if the index is invalid
 */
int get_bit(unsigned long int num, unsigned int index)
{
/* Check if index is out of range */
if (index >= sizeof(num) * 8)
{
return (-1);
}

/*
 * Right-shift the number to get the desired bit
 * to the least-significant position
 * then mask off all other bits
 */
unsigned long int mask = 1UL << index;
unsigned long int masked_num = num & mask;

/*
 * If the masked number is 0
 * the desired bit was a 0
 * otherwise, it was a 1
 */

if (masked_num == 0)
{
return (0);
}
else
{
return (1);
}
}

