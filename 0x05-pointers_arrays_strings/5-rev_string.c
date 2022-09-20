#include "main.h"
/**
 * rev_string - prints sttring from back chars
 * @s: pointer
 * Description: prints string
*/
void rev_string(char *s)
{
int a, b, c, d;
for (b = 0; s[b] != '\0'; b++)
{
}
c = b - 1;
for (a = 0; a < c; a--)
{
d = s[b];
s[b] = s[a];
s[a] = d;
b++;
}
}
