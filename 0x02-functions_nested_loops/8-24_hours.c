#include "main.h"


/**
*jack_bauer - print every mins on 24 hours
*/

void jack_bauer(void)
{
	int hr;
	int mins;

	for (hr = 0; hr <= 23; hr++)
	{
	for (mins = 0; mins <= 59; mins++)
	{
	_putchar(hr / 10 + 48);
	_putchar(hr % 10 + 48);
	_putchar(':');
	_putchar(mins / 10 + 48);
	_putchar(mins % 10 + 48);
	_putchar('\n');
	}
	}
}
