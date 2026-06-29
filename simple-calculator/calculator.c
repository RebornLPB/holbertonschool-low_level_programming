#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* main - entry point for the simple calculator program */
int main(void)
{
	int choice = -1;
	float nb1, nb2, result;

	printf("Welcome into the simple calculator made with ♥ in C.");
	fflush(stdout);
	sleep(3);
	system("clear");
	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		scanf("%d", &choice);

		if (choice == 1)
		{
			system("clear");
			printf("1 | Add\n");
			printf("Number one:");
			scanf("%f", &nb1);
			printf("Number two:");
			scanf("%f", &nb2);

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
			printf("2 | Substract\n");
			printf("Number one:");
			scanf("%f", &nb1);
			printf("Number two:");
			scanf("%f", &nb2);

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
			printf("Number one:");
			scanf("%f", &nb1);
			printf("Number two:");
			scanf("%f", &nb2);

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
			printf("Number one:");
			scanf("%f", &nb1);
			printf("Number two:");
			scanf("%f", &nb2);

			result = nb1 / nb2;

			printf("\n> Resultat : %.2f / %.2f = %.2f\n", nb1, nb2, result);
			printf("\nRetour au menu dans 3 secondes...");
			fflush(stdout);
			sleep(3);
			system("clear");

		}
		else if (choice == 0)
		{
			printf("Choix 0\n");
			sleep(1);
			system("clear");
			printf("Bye!");
			exit(0);
		}
		else 
		{
			printf(" Invalid choice.");
		}
	}
	return (0);
}
