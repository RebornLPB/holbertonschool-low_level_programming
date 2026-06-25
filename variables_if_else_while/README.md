# 0x01. C - Variables, if, else, while

Ce projet approfondit la logique de programmation en C en se concentrant sur la manipulation des variables, les structures conditionnelles (`if`, `else`) et les boucles de contrôle (`while`). L'objectif est de maîtriser les opérateurs logiques, relationnels et les tables ASCII sans utiliser de fonctions complexes.

## 📝 Concepts Clés

* **Conditions complexes :** Implémentation de structures décisionnelles imbriquées ou chaînées.
* **Boucles de contrôle :** Répétition d'instructions avec `while` et gestion des incrémentations.
* **Table ASCII :** Manipulation directe des valeurs entières des caractères (ex: `'a'` vaut `97`) pour effectuer des opérations arithmétiques sur les lettres.

## 🛠️ Spécifications et Contraintes

* **Norme :** Respect strict du style **Betty**.
* **Fonction Autorisée :** Seule la fonction `putchar` est autorisée pour l'affichage (interdiction d'utiliser `printf`, `puts`, ou toute autre fonction de la bibliothèque standard, sauf mention contraire).
* **Limitation :** Tu ne peux utiliser `putchar` qu'un nombre très limité de fois par fichier (souvent un maximum de 3 ou 4 fois selon l'exercice).

## 📁 Liste des Fichiers & Tâches

| Fichier | Objectif | Description |
| :--- | :--- | :--- |
| `0-positive_or_negative.c` | Affectation & Condition | Assigne un nombre aléatoire à une variable et affiche s'il est positif, négatif ou nul. |
| `1-last_digit.c` | Modulo & Condition | Récupère le dernier chiffre d'un nombre aléatoire et applique une condition sur sa valeur. |
| `2-print_alphabet.c` | Boucle & ASCII | Affiche l'alphabet en minuscules, suivi d'une nouvelle ligne. |
| `3-print_alphabets.c` | Boucle & ASCII | Affiche l'alphabet en minuscules, puis en majuscules, suivis d'une nouvelle ligne. |
| `4-print_alphabt.c` | Condition dans Boucle | Affiche l'alphabet en minuscules en excluant les lettres `q` et `e`. |
| `5-print_numbers.c` | Boucle | Affiche tous les nombres de base 10 (0 à 9) suivis d'une nouvelle ligne. |
| `6-print_numberz.c` | Boucle & ASCII | Affiche tous les nombres de base 10 (0 à 9) en utilisant uniquement `putchar` (sans variable de type `char`). |
| `7-print_tebahpla.c` | Boucle inversée | Affiche l'alphabet en minuscules à l'envers. |
| `8-print_base16.c` | Boucle | Affiche tous les nombres de la base 16 (hexadécimal) en minuscules (0-9, a-f). |
| `9-print_comb.c` | Combinaisons | Affiche toutes les combinaisons possibles de chiffres uniques (0 à 9), séparés par une virgule et un espace. |
| `100-print_comb3.c` | Tâche Avancée | Affiche toutes les combinaisons possibles de deux chiffres différents (ex: `01` et `10` sont considérés comme identiques, seul `01` est affiché). |
| `101-print_comb4.c` | Tâche Avancée | Affiche toutes les combinaisons possibles de trois chiffres différents. |
| `102-print_comb5.c` | Tâche Avancée | Affiche toutes les combinaisons possibles de deux paires de deux chiffres (ex: `00 01`, `00 02`...). |

## 🚀 Compilation Standard

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o alphabet
./alphabet