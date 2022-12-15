#include "main.h"

/**
 * prints_last_digit - prints the last digit of a number
 * @n: the number to be treated
 * Return: value of the last digit of the number
 */

int print_last_digit(int n)
{
	int x;
	
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}		
