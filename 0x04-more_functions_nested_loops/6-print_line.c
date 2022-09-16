#include"main.h"

/**
*print_line -Entry point.
*@n: from parameter.
*Return: no return.
*/
void print_line(void)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
