#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int rose, ray;

	for (rose = 0; rose < 8; rose++)
	{
		for (ray = 0; ray < 8; ray++)
		{
			if (ray == 7)
			{
				_putchar(a[rose][ray]);
				_putchar('\n');
			}
			else
				_putchar(a[rose][ray]);
		}
	}
}
