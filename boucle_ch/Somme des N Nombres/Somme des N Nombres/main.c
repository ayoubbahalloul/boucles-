
   #include <stdio.h>

int main() {
    int n, i, s = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        s = s+ i;
    }

    printf("La somme est %d.\n", s);

    return 0;
}

