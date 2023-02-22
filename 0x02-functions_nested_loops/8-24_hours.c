#include "main.h"

/**
* jack_bauer - function
*
* Description: prints every minute of the day, starting from 00:00 to 23:59
* Return:Always 0 (success)
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar(10);
		}
	}
}
