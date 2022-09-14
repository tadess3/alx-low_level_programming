#include"main.h"

/**
*print_alphabet_x10 -Entry point
*
*Return: Nothing. (Success)
*/
void print_alphabet_x10(void)
{
char x = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (x <= 'z')
{
_putchar(x);
x++;
}
x = 'a';
_putchar('\n');
}
}
