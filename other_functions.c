#include "main.h"
/**
* _print_binary - function to convert to integer to binary
* @n: input int
* Return: int
*/

int _print_binary(int n)
{
int binaryNum[128];
int j, i = 0;
while (n > 0)
{
binaryNum[i] = n % 2;
n = n / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
{
write(1, &"01"[binaryNum[j] % 2], 1);
}
return (i);
}
