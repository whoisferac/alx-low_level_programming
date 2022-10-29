#include "main.h"
/**
 * rev_string - prints string reverse
 * @s: pointer
 * Description: prints string
*/
void rev_string(char *s)
{
int length, a, div;
char t;
for (length = 0; s[length] != '\0'; length++)
;
a = 0;
div = length / 2;
while (div--)
{
t = s[length - a - 1];
s[length - a - 1] = s[a];
s[a] = t;
a++;
}
}
