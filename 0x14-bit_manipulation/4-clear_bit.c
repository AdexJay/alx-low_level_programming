#include "main.h"
/**
 * clear_bit - set a bit to 0
 * @n: the number
 * @index: the position to set the bit
 * Description: set 1 bit to 0
 * section header: the header of this fuction is holberton.h
 * Return: 1 in success, -1 in fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (-(1 << index));
		return (1);
	}

	return (-1);
}
