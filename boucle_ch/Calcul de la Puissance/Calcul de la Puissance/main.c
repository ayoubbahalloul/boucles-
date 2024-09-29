#include <stdio.h>

int main() {
    int n,b, ex, i;
    long long resultat = 1; // Utilisation de long long pour gérer les grands résultats

    // Demande à l'utilisateur d'entrer la base et l'exposant
    printf("Entrez la base: ");
    scanf("%d", &b);
    printf("Entrez l'exposant: ");
    scanf("%d", &ex);

    // Calcule la puissance en utilisant une boucle
    for(i = 1; i <= ex; ++i) {
        resultat = resultat *b;
    }

    // Affiche le résultat
    printf("%d^%d = %lld\n", b, ex, resultat);

    return 0;
}
