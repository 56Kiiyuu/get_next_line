*This project has been created as part of the 42 curriculum by kevlim.*

# get_next_line

## Description
Le projet **get_next_line** consiste à implémenter une fonction permettant de lire un fichier ligne par ligne à partir d’un descripteur de fichier. À chaque appel, la fonction retourne la ligne suivante, y compris le caractère de fin de ligne (`\n`) s’il est présent. Ce projet vise à approfondir la gestion des descripteurs de fichiers, des variables statiques, de l’allocation dynamique de mémoire et de la prévention des fuites mémoire.

## Instructions
Compilation :
`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c`  
Exécution :
`./a.out`  
La valeur de `BUFFER_SIZE` peut être modifiée pour tester différents comportements.

## Algorithme
L’algorithme repose sur l’utilisation d’une variable statique appelée *stash* qui conserve les données non encore lues entre deux appels à la fonction. Les données sont lues par blocs de taille `BUFFER_SIZE` puis concaténées au stash jusqu’à la détection d’un caractère de nouvelle ligne ou de la fin de fichier. Une fois une ligne complète détectée, celle-ci est extraite et retournée, tandis que le reste des données est conservé pour l’appel suivant. Cette approche garantit une lecture efficace, une gestion correcte des lectures partielles et une compatibilité avec toutes les tailles de buffer.

## Resources
Références techniques : GitBook 42 (logique et fonctionnement de get_next_line), pages de manuel Linux (`read`, `open`), documentation Valgrind.  
Utilisation de l’IA : l’IA a été utilisée comme assistant d’analyse et de débogage pour interpréter les rapports Valgrind, identifier des fuites mémoire et valider la gestion de la mémoire. L’ensemble du code a été écrit et testé manuellement.

## Notes
Le projet respecte la norme 42, gère correctement la mémoire dynamique et ne présente aucune fuite mémoire détectée par Valgrind (`definitely lost: 0 bytes`).
