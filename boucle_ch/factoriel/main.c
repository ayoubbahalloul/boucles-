#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i ;
    int  f=1;


    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Entrez un nombre entier positif\n");
    } else {
        for(i = 1; i <= n; ++i) {
            f =f * i;
        }
        printf("La factorielle est %d\n",  f);
    }

    return 0;
}
