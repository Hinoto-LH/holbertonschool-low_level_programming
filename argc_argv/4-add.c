#include <stdio.h>
#include <stdlib.h>

/**
 * main - additionne des nombres positifs
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 en cas de succès, 1 en cas d’erreur
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
			return (1);
			}
		}
	somme += atoi(argv[i]);
	}
		printf("%d\n", somme);
	return (0);
}

