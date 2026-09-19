#include <stdio.h>

int main() {
    float putaran = 5;
    float distance = 14;
    float pi = 3.14;
    float circumference;
    circumference = distance / (putaran * 2 * pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance);
    printf("\n");
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", circumference);
    return 0;
}