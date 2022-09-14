#include "main.h"
/**
 * _intlower - checks for lowercase characters
 * Description: character lowercase checker
 * Return: 1 if lowercase else 0
*/
int _islower(int c)
{
if(c <= 'a' && c >= 'z')
{
return (1);
}
else
{
return (0);	
}
}
