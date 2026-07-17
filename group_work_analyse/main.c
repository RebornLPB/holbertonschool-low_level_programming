#include <stdio.h>
#include <stdlib.h>

/**
 * struct Student - Structure pour un étudiant
 * @name: Nom de l'étudiant
 * @score: Note de l'étudiant
 */
typedef struct Student
{
	char *name;
	int score;
} Student;

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int num_students = 3;
	Student *classroom;
	int i;
	int total_score = 0;
	float average;


	classroom = malloc(num_students * sizeof(Student));
	if (classroom == NULL)
	{
		return (1);
	}

	for (i = 0; i < num_students; i++)
	{
		classroom[i].name = malloc(50 * sizeof(char));
		if (classroom[i].name == NULL)
		{
			return (1);
		}
		sprintf(classroom[i].name, "Etudiant_%d", i);
		classroom[i].score = 50 + (i * 10);
	}

	for (i = 0; i < num_students; i++)
	{
		total_score += classroom[i].score;
	}

	average = (float)total_score / num_students;

	printf("La moyenne de la classe est de : %.2f\n", average);

	for (i = 0; i < num_students; i++)
	{
		free(classroom[i].name);
	}
	free(classroom);

	return (0);
}