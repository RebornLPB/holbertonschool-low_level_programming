# 0x02. C - Functions, nested loops

Ce dossier est dédié à l'apprentissage des fonctions en C et à la manipulation des boucles imbriquées (`nested loops`). L'objectif est de comprendre comment modulariser le code et gérer des structures algorithmiques bidimensionnelles ou répétitives.

## 📝 Concepts Clés

* **Prototypes de Fonctions :** Déclaration des fonctions dans un fichier d'en-tête (`main.h`) pour permettre leur utilisation à travers plusieurs fichiers sources.
* **Boucles Imbriquées :** Utilisation de boucles dans d'autres boucles (ex: `for` ou `while` imbriqués) pour générer des matrices, des tables de multiplication ou des motifs complexes.
* **Header Files (`main.h`) :** Centralisation des prototypes de toutes les fonctions personnalisées, y compris la fonction native `_putchar`.

## 🛠️ Spécifications et Contraintes

* **Norme :** Respect strict du style **Betty**.
* **Fonction Autorisée :** Seule la fonction `_putchar` est autorisée pour l'affichage (interdiction d'utiliser `printf`, `puts`, etc., sauf mention contraire).
* **Fichiers de Test :** Les fichiers de test fournis par l'école (ex: `0-main.c`) ne doivent pas être poussés sur le dépôt distant.

## 📁 Liste des Fichiers & Tâches

| Fichier | Fonction / Objectif | Description |
| :--- | :--- | :--- |
| `_putchar.c` | `int _putchar(char c)` | Écrit le caractère `c` sur la sortie standard. |
| `0-putchar.c` | `main` | Programme qui affiche `_putchar`, suivi d'une nouvelle ligne. |
| `1-alphabet.c` | `void print_alphabet(void)` | Affiche l'alphabet en minuscules suivi d'une nouvelle ligne. |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void)` | Affiche 10 fois l'alphabet en minuscules en utilisant des boucles imbriquées. |
| `3-islower.c` | `int _islower(int c)` | Vérifie si un caractère est en minuscule (renvoie `1` si oui, `0` sinon). |
| `4-isalpha.c` | `int _isalpha(int c)` | Vérifie si un caractère est une lettre (majuscule ou minuscule). |
| `5-sign.c` | `int print_sign(int n)` | Affiche le signe d'un nombre (`+`, `0`, `-`) et renvoie sa polarité. |
| `6-abs.c` | `int _abs(int)` | Calcule la valeur absolue d'un entier. |
| `7-print_last_digit.c` | `int print_last_digit(int)` | Affiche et renvoie le dernier chiffre d'un nombre. |
| `8-24_hours.c` | `void jack_bauer(void)` | Affiche chaque minute de la journée de 00:00 à 23:59. |
| `9-times_table.c` | `void times_table(void)` | Affiche la table de multiplication de 0 à 9, formatée avec des virgules et des espaces. |
| `10-add.c` | `int add(int, int)` | Additionne deux entiers et renvoie le résultat. |
| `11-print_to_98.c` | `void print_to_98(int n)` | Affiche tous les nombres naturels de `n` jusqu'à `98`, séparés par des virgules. |

## 🚀 Compilation

Exemple de compilation standard pour ce module :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
./0-putchar