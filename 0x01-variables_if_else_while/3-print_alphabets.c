#include<stdio.h>

/**
*main -Entry point
*
*Return: always 0
*/
int main(void)
{
int c;

for (c = 97; c <= 122; c++)
{
putchar(c);
}

for (c = 65; c <= 90; c++)
{
putchar(c);
}
putchar(10);
return (0);
}
