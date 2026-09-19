#include <stdio.h>

int main() {
    int army = 958730;
    int hero = 5;
    int fight = army / hero;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", army);
    printf("Jumlah Pahlawan = %d\n", hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n", fight);
    return 0;
}