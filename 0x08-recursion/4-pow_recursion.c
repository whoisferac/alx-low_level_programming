int _pow_recursion(int x, int y)
{
int mult;
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
mult = x * _pow_recursion(x, y - 1);
}
return (mult);
}
