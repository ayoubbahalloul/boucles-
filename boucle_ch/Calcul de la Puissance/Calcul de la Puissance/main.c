#include <stdio.h>

int main() {
    int n,b, ex, i;
    long long resultat = 1; // Utilisation de long long pour g�rer les grands r�sultats

    // Demande � l'utilisateur d'entrer la base et l'exposant
    printf("Entrez la base: ");
    scanf("%d", &b);
    printf("Entrez l'exposant: ");
    scanf("%d", &ex);

    // Calcule la puissance en utilisant une boucle
    for(i = 1; i <= ex; ++i) {
        resultat = resultat *b;
    }

    // Affiche le r�sultat
    printf("%d^%d = %lld\n", b, ex, resultat);

    return 0;
}
