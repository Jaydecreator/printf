#include "main.h"

int print_bin(unsigned int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			count += print_bin(num / 2);
			count += _putchar((num % 2) + '0');
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
