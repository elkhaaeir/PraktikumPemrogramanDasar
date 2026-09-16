#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5;
    float tinggi = 12;
    float hypotenuse;
    float perimeter;
    float area;

    hypotenuse = sqrt((alas * alas) + (tinggi * tinggi));
    perimeter = alas + tinggi + hypotenuse;
    area = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("\nJawab :\n");
    printf("Sisi A = %0.f cm\n", tinggi);
    printf("Sisi B = %0.f cm\n", hypotenuse);
    printf("Sisi C = %.0f cm\n", alas);
    printf("Keliling = %.0f cm\n", perimeter);
    printf("Luas = %.0f cm\n", area);
    return 0;
}