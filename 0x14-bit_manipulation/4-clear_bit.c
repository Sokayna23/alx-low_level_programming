/**
 * clear_bit - clears a bit at a given index
 * @n: number
 * @index: the position
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
