#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: aregument vector
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
