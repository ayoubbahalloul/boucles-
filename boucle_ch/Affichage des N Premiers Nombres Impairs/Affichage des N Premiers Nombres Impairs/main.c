#include <stdio.h>

int main() {
    int n, i, im = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        printf("%d ",im);
        im = im +2;
    }

    printf("%d\n",im);
    return 0;
}
