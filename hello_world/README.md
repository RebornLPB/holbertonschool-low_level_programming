# 0x00. C - Hello, World

Ce projet marque le début de l'apprentissage du langage C et du processus de compilation au sein d'Holberton School. L'objectif est de se familiariser avec l'environnement de développement Linux, l'utilisation des commandes de base du terminal, et la structure minimale d'un programme en C.

## 📝 Concepts Clés

* **Étapes de la Compilation :** Comprendre le rôle du préprocesseur, du compilateur, de l'assembleur et de l'éditeur de liens (`gcc`).
* **Entrées/Sorties Standards :** Utilisation des fonctions natives `printf` et `puts` pour afficher du texte, ainsi que l'utilisation de `write` via les appels système.
* **Scripts Bash :** Automatisation des étapes intermédiaires de compilation via des scripts shell personnalisés.

## 🛠️ Spécifications et Contraintes

* **Norme :** Respect strict du style **Betty** (code et commentaires).
* **Outils :** Interdiction d'utiliser `printf` lorsque `puts` ou `write` sont explicitement demandés (et inversement).
* **Génération :** Aucun avertissement (warning) ne doit être toléré lors de la compilation.

## 📁 Liste des Fichiers & Tâches

| Fichier | Type / Fonction | Description |
| :--- | :--- | :--- |
| `0-preprocessor` | Script Bash | Exécute la préprocessing d'un fichier C et stocke le résultat dans un autre fichier. |
| `1-compiler` | Script Bash | Compile un fichier C sans l'assembler (génère le fichier `.s`). |
| `2-assembler` | Script Bash | Assemble un fichier C sans l'éditer (génère le fichier objet `.o`). |
| `3-name` | Script Bash | Compile entièrement un programme et génère un exécutable nommé `cisfun`. |
| `4-puts.c` | Fonction `main` | Programme qui affiche exactement une chaîne de caractères en utilisant la fonction `puts`. |
| `5-printf.c` | Fonction `main` | Programme qui affiche exactement une chaîne de caractères en utilisant la fonction `printf`. |
| `6-size.c` | Fonction `main` | Programme qui affiche la taille en octets de divers types de données sur la machine cible (`char`, `int`, etc.). |
| `101-quote.c` | Fonction `main` | Tâche avancée : Affiche un message d'erreur sur la sortie d'erreur standard (`stderr`) via la fonction `write`. |

## 🚀 Compilation Standard

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts