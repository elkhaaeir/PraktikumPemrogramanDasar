#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 7;
    int meter = 85000;
    int circumference = a + b + c;
    
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", circumference);
    printf("Harga Tanah Per Meter adalah = Rp %d\n", meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", meter * circumference);
    return 0;
}