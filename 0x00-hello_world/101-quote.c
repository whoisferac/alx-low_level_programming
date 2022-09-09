#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * description: printing without printf and puts
 *
 * Return: always 1 (error) as specified
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpat, 2015-10-19\n" 51);
	return (1);
}
