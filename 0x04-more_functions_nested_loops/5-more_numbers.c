#include "main.h"

/**
 * more_numbers - prints 0 to 14 on one line ten times.
 *
 */
void more_numbers(void)
{
int i;
int n = 0;

for (i = 0 ; i < 10 ; i++)
{
while (n < 15)
{
if (n > 9)
_putchar('0' + n / 10);
_putchar('0' + n % 10);
n++;
}
n = 0;
_putchar('\n');
}
}

