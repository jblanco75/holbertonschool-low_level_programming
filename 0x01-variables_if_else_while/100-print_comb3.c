#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int x;
int y = 0;
int z = 49;

for (x = 48; x <= 56; ++x)
{
for (; z <= 57; ++z)
{

putchar(x);
putchar(z);
if (x != 56 || z != 57)
{
putchar(44);
putchar(32);
}
}
y++;
z = 49 + y;
}
putchar('\n');
return (0);
}
