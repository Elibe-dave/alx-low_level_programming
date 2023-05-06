#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index
 * @num: unsigned long int to search
 * @index: index of the bit to return (0-indexed)
 *
 * Return: value of the bit (0 or 1), or -1 if index is out of range
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit_value;

	/*
	 * check if index is out of range
	 **/
	if (index > 63)
		return (-1);

	/*
	 * shift the number to the right by the index
	 * and perform a bitwise AND operation with 1
	 **/
	bit_value = (num >> index) & 1;
	/*
	 ** return the bit value at the specified index
	 **/
	return (bit_value);
}

