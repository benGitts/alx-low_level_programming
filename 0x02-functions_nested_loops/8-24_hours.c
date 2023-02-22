#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int min, i;

	for (i = 0; i <= 23; ++i)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
