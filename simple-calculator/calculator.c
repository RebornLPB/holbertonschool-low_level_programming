#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* main - entry point for the simple calculator program */
int main(void)
{
    int choice = -1;
    float nb1, nb2, result;
    char c;

    printf("Welcome into the simple calculator made with ♥ in C.");
    fflush(stdout);
    sleep(3);
    system("clear");
    while (1)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
        printf("Choice: ");

        /* Si scanf ne renvoie pas 1, l'entrée est invalide (ex: une lettre) */
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice\n");
            /* Nettoyage du tampon stdin pour consommer les caractères invalides */
            while ((c = getchar()) != '\n' && c != EOF);
            continue; /* On recommence la boucle du menu */
        }

        if (choice == 1)
        {
            system("clear");
            printf("1 | Add\n");
            
            printf("A: ");
            while (scanf("%f", &nb1) != 1)
            {
                printf("Invalid number\nA: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            printf("B: ");
            while (scanf("%f", &nb2) != 1)
            {
                printf("Invalid number\nB: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            result = nb1 + nb2;

            printf("\n> Resultat : %.2f + %.2f = %.2f\n", nb1, nb2, result);
            printf("\nRetour au menu dans 3 secondes...");
            fflush(stdout);
            sleep(3);
            system("clear");
        }
        else if (choice == 2)
        {
            system("clear");
            printf("2 | Subtract\n");
            
            printf("A: ");
            while (scanf("%f", &nb1) != 1)
            {
                printf("Invalid number\nA: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            printf("B: ");
            while (scanf("%f", &nb2) != 1)
            {
                printf("Invalid number\nB: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            result = nb1 - nb2;

            printf("\n> Resultat : %.2f - %.2f = %.2f\n", nb1, nb2, result);
            printf("\nRetour au menu dans 3 secondes...");
            fflush(stdout);
            sleep(3);
            system("clear");
        }
        else if (choice == 3)
        {
            system("clear");
            printf("3 | Multiply\n");
            
            printf("A: ");
            while (scanf("%f", &nb1) != 1)
            {
                printf("Invalid number\nA: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            printf("B: ");
            while (scanf("%f", &nb2) != 1)
            {
                printf("Invalid number\nB: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            result = nb1 * nb2;

            printf("\n> Resultat : %.2f * %.2f = %.2f\n", nb1, nb2, result);
            printf("\nRetour au menu dans 3 secondes...");
            fflush(stdout);
            sleep(3);
            system("clear");
        }
        else if (choice == 4)
        {
            system("clear");
            printf("4 | Divide\n");
            
            printf("A: ");
            while (scanf("%f", &nb1) != 1)
            {
                printf("Invalid number\nA: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            printf("B: ");
            while (scanf("%f", &nb2) != 1)
            {
                printf("Invalid number\nB: ");
                while ((c = getchar()) != '\n' && c != EOF);
            }

            if (nb2 == 0)
            {
                printf("Error: division by zero\n");
            }
            else
            {
                result = nb1 / nb2;
                printf("\n> Resultat : %.2f / %.2f = %.2f\n", nb1, nb2, result);
            }

            printf("\nRetour au menu dans 3 secondes...");
            fflush(stdout);
            sleep(3);
            system("clear");
        }
        else if (choice == 0)
        {
            system("clear");
            printf("Bye!\n");
            exit(0);
        }
        else 
        {
            printf("Invalid choice\n");
        }
    }
    return (0);
}