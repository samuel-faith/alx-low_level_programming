#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	for (hr = 0; hr < 23; hr++)
	{
	for (min = 0; min < 59; min++)
	{
	_putchar("%02d":"%02d", hr, min);
		_putchar('\n');
	}
	_putchar("%02d":"%02d", hr. min);
		_putchar('\n');
	}
}
