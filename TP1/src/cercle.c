#include <stdio.h>
#include <math.h>

int main() {
    double rayon = 6.0;
    double aire;
    double perimetre;

    aire = M_PI * rayon * rayon;
    perimetre = 2 * M_PI * rayon;

    printf("Rayon : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Perimetre du cercle : %.2f\n", perimetre);

    return 0;
}

