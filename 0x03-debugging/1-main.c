#include <stdio.h>

/**
 *main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10) /* i is never incremented so it is always less than 10 , here is the line which make it an infinite*/
{
putchar(i); 
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
