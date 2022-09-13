#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)

{

char lc;
char uc;

for (lc = 'a'; lc <= 'z'; lc++)
{
	putchar (lc);
}
for (uc = 'A'; uc <= 'Z'; uc++)
{
	putchar (uc);
}
	putchar ('\n');
return (0);
}
