#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int tmp;
	unsigned int found;

	while (s[a] != '\0')
	{
		tmp = 0;
		found = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				tmp = 1;
			}
			b++;
		}
		if (tmp != 0)
		{
			a++;
			found++;
		}
		else
		{
			return (found);
		}
	}
	return (found);
}




Déclarer un compteur principal (pour le retour) et tes variables d'index (i et j).

Lancer une boucle while sur s[i].

À chaque début de tour, remettre un flag found à 0.

Lancer une boucle while ou for sur accept[j].

Si match, mettre found = 1 et break.

Après la boucle de accept, vérifier found. Si c'est 0, renvoyer le compteur. 
Sinon, incrémenter le compteur et passer à s[i+1].