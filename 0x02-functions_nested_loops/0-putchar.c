#include"main.h"

/**
*main -Entry point
*Description: It prints the word Holberton, followed by a new line.
*Return: 0 (Success)
*/
int main(void)
{
char word[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(word[i]);
}
_putchar('\n');

return (0);
}
