#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;
	sum = 1;

	if(argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);

		}
	}
	printf("%d\n", sum);
	return (0);
}
