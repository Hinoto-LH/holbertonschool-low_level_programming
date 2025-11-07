#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau contenant les arguments
 *
 * Return: 0 en cas de succès, 1 en cas d’erreur
 */
int main(int argc, char *argv[])
{
    int num1, num2, resultat;

    /* Vérifie que le programme reçoit exactement deux arguments */
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    /* Convertit les arguments (chaînes) en entiers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Calcule le produit */
    resultat = num1 * num2;

    /* Affiche le résultat suivi d’un saut de ligne */
    printf("%d\n", resultat);

    return (0);
}

